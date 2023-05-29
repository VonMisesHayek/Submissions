#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b) ((a)>(b)) ? (a):(b)
#define MAXV 101
int discovered[MAXV];
int acc[MAXV];
typedef struct edgenode {
    int y,c;
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
    g->nvertices=0; g->nedges=0;
    for (int i=0; i<MAXV; i++) g->edges[i]=NULL;
    for (int i=0; i<MAXV; i++) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y, int c, int und) {
    edgenode *p=malloc(sizeof(edgenode));
    p->next=g->edges[x]; g->edges[x]=p; p->y=y; p->c=c; g->degree[x]++;
    if (und==1) insert_edge(g,y,x,c,0);
}
void read_graph(graph *g, int n, int m) {
    initialize_graph(g);
    g->nvertices=n;
    int x,y,c;
    for (int i=0; i<m; i++) {
        scanf("%d %d %d\n",&x,&y,&c);
        insert_edge(g,x,y,c,1);
    }
}
void initialize_search() {
    for (int i=0; i<MAXV; i++) discovered[i]=0;
    for (int i=0; i<MAXV; i++) acc[i]=0;
}
void process_edge(int x, int y, int c) {
    acc[y]=acc[x]+c;
}
int process_late(int v, int curr) {
    return MAX(curr,acc[v]);
}
int bfs(graph *g, int start) {
    edgenode *p; int v,y,c,res=0; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        while (p!=NULL) {
            y=p->y; c=p->c;
            if (discovered[y]==0) {
                enqueue(&q,y);
                discovered[y]=1;
                process_edge(v,y,c);
            }
            p=p->next;
        }
        if (g->degree[v]==1) res=process_late(v,res);
    }
    return res;
}
int main() {
    int n; scanf("%d\n",&n);
    graph g; read_graph(&g,n,n-1);
    initialize_search();
    printf("%d",bfs(&g,0));
    return 0;
}
