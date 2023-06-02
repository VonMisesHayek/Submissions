#include <stdio.h>
#include <stdlib.h>
#define MAXV 101
int discovered[MAXV];
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
    q->first=(q->first+1)%MAXV;
    q->count--;
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
    if (und==1) {
        insert_edge(g,y,x,0);
        g->nedges++;
    }
}
void read_graph(graph *g, int n, int m) {
    initialize_graph(g);
    g->nvertices=n;
    int x,y;
    for (int i=0; i<m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y,1);
    }
}
void bfs(graph *g, int start) {
    edgenode *p; int v,y; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                enqueue(&q,y);
                discovered[y]=1;
            }
            p=p->next;
        }
    }
}
void initialize_search() {
    for (int i=0; i<MAXV; i++) discovered[i]=0;
}
int cthulhu(graph *g) {
    if (g->nvertices!=g->nedges) return 0;
    int c=0;
    initialize_search();
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            bfs(g,i);
            c++;
        }
    }
    return (c==1);
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    graph g; read_graph(&g,n,m);
    (cthulhu(&g)) ? printf("FHTAGN!"):printf("NO");
    return 0;
}
