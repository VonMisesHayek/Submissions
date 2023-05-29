#include <stdio.h>
#include <stdlib.h>
#define MAXV 200002
int discovered[MAXV];
typedef struct edgenode {
    int y;
    struct edgenode *next;
} edgenode;
typedef struct {
    edgenode *edges[MAXV];
    int degree[MAXV];
    int nvertices;
    int nedges;
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
    q->count=q->count+1;
}
int dequeue(queue *q) {
    int x=q->q[q->first];
    q->first=(q->first+1)%MAXV;
    q->count=q->count-1;
    return x;
}
int empty_queue(queue *q) {
    return (q->count<=0);
}
void initialize_graph(graph *g) {
    g->nvertices=0;
    g->nedges=0;
    for (int i=0; i<MAXV; i++) g->edges[i]=NULL;
    for (int i=0; i<MAXV; i++) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y) {
    edgenode *p=malloc(sizeof(edgenode)),*rp=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    rp->y=x; rp->next=g->edges[y]; g->edges[y]=rp; g->degree[y]++;
}
void read_graph(graph *g, int n, int m) {
    int x,y;
    initialize_graph(g);
    g->nvertices=n;
    for (int i=0; i<m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y);
    }
}
void initialize_search() {
    for (int i=0; i<MAXV; i++) discovered[i]=0;
}
int bfs(graph *g, int start) {
    int v,y,is_cycle=1; edgenode *p; queue q;
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
                if (g->degree[y]!=2) is_cycle=0;
            }
            p=p->next;
        }
    }
    return (is_cycle && g->degree[start]==2);
}
int cycles(graph *g) {
    initialize_search();
    int res=0;
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            res+=bfs(g,i);
        }
    }
    return res;
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    graph g; read_graph(&g,n,m);
    printf("%d",cycles(&g));
    return 0;
}
