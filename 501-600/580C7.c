#include <stdio.h>
#include <stdlib.h>
#define MAXV 100001
int discovered[MAXV];
int cats[MAXV];
int acc[MAXV];
int walk[MAXV];
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
int empty_queue(queue *q) {
    return (q->count<=0);
}
void enqueue(queue *q, int x) {
    q->last=(q->last+1)%MAXV;
    q->q[q->last]=x;
    q->count++;
}
int dequeue(queue *q) {
    int res=q->q[q->first];
    q->first=(q->first+1)%MAXV;
    q->count--;
    return res;
}
void initialize_graph(graph *g) {
    g->nvertices=0;
    g->nedges=0;
    for (int i=0; i<MAXV; i++) g->edges[i]=NULL;
    for (int i=0; i<MAXV; i++) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y, int und) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    if (und==1) insert_edge(g,y,x,0);
}
void read_graph(graph *g, int n, int m) {
    int x,y;
    initialize_graph(g);
    g->nvertices=n;
    for (int i=0; i<m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y,1);
    }
}
void initialize_search() {
    for (int i=0; i<MAXV; i++) discovered[i]=0;
    for (int i=0; i<MAXV; i++) acc[i]=cats[i];
    for (int i=0; i<MAXV; i++) walk[i]=1;
}
void process_edge(int v, int y, int m) {
    acc[y]=(acc[v]+1)*cats[y];
    if (walk[v]==0 || acc[y]>m) walk[y]=0;
}
void bfs(graph *g, int start, int m) {
    edgenode *p; int v,y; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                discovered[y]=1;
                enqueue(&q,y);
                process_edge(v,y,m);
            }
            p=p->next;
        }
    }
}
int total_walk(graph *g, int m) {
    initialize_search();
    bfs(g,1,m);
    int res=0;
    for (int i=1; i<=g->nvertices; i++) {
        if (i!=1 && g->degree[i]==1) {
            res+=walk[i];
        }
    }
    return res;
}
int read(int *arr, int length) {
    for (int i=1; i<=length; i++) scanf("%d",(arr+i));
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    read(cats,n);
    graph g; read_graph(&g,n,n-1);
    printf("%d",total_walk(&g,m));
    return 0;
}
