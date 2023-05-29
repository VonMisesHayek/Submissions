#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) ((a)>(b)) ? (a):(b)
#define MAXV 401
int discovered[MAXV];
int dist[MAXV];
int vertices[MAXV];
void assign(int *arr, int length, int val) {
    for (int i=0; i<length; i++) arr[i]=val;
}
typedef struct edgenode {
    int y;
    struct edgenode *next;
} edgenode;
typedef struct {
    edgenode *edges[MAXV];
    int degree[MAXV];
    int nvertices,nedges;
} graph;
typedef struct {
    int q[MAXV+1];
    int first,last,count;
} queue;
void init_queue(queue *q) {
    q->first=0; q->last=MAXV-1; q->count=0;
}
void enqueue(queue *q, int x) {
    q->last=(q->last+1)%MAXV;
    q->q[q->last]=x;
    q->count++;
}
int dequeue(queue *q) {
    int res=q->q[q->first];
    q->first=(q->first+1)%MAXV; q->count--;
    return res;
}
int empty_queue(queue *q) {
    return (q->count<=0);
}
void initialize_graph(graph *g) {
    g->nvertices=0; g->nedges=0;
    for (int i=0; i<MAXV; i++) g->edges[i]=NULL;
    for (int i=0; i<MAXV; i++) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y, int und) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    g->nedges++;
    if (und==1) insert_edge(g,y,x,0);
}
void read_graph(graph *g, int n, int m) {
    initialize_graph(g);
    g->nvertices=n; int x,y;
    for (int i=0; i<m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y,1);
    }
}
void initialize_search() {
    assign(discovered,MAXV,0); assign(dist,MAXV,0);
}
void bfs(graph *g, int start) {
    edgenode *p; int v,y; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1; dist[start]=0;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                discovered[y]=1;
                enqueue(&q,y);
                dist[y]=dist[v]+1;
            }
            p=p->next;
        }
    }
}
void complement(graph *g, graph *c) {
    initialize_graph(c);
    c->nvertices=g->nvertices;
    edgenode *p;
    for (int i=1; i<=g->nvertices; i++) {
        assign(vertices,MAXV,0);
        p=g->edges[i];
        while (p!=NULL) {
            vertices[p->y]=1;
            p=p->next;
        }
        for (int j=1; j<=g->nvertices; j++) {
            if (vertices[j]==0) insert_edge(c,i,j,1);
        }
    }
}
int route_time(graph *g, graph *c) {
    initialize_search(); bfs(g,1);
    int temp=dist[g->nvertices];
    if (temp==0) return -1;
    initialize_search(); bfs(c,1);
    temp=MAX(temp,dist[c->nvertices]);
    return (dist[c->nvertices]==0) ? -1:temp;
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    graph g,c; read_graph(&g,n,m); complement(&g,&c);
    printf("%d",route_time(&g,&c));
    return 0;
}
