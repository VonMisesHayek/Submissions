#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MAXV 50001
int discovered[MAXV];
int parent[MAXV];
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
    q->count--; return res;
}
int empty_queue(queue *q) {
    return (q->count<=0);
}
void initialize_graph(graph *g) {
    g->nvertices=0; g->nedges=0;
    rep (i,0,MAXV) g->edges[i]=NULL;
    rep (i,0,MAXV) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y, int und) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    if (und==1) {
        insert_edge(g,y,x,0);
        g->nedges++;
    }
}
void read_graph(graph *g, int n, int m, int root) {
    initialize_graph(g); g->nvertices=n;
    int p;
    for (int i=1; i<=m+1; i++) {
        if (i!=root) {
            scanf("%d",&p);
            insert_edge(g,i,p,1);
        }
    }
}
void initialize_search() {
    rep (i,0,MAXV) discovered[i]=0;
    rep (i,0,MAXV) parent[i]=-1;
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
                parent[y]=v;
            }
            p=p->next;
        }
    }
}
void new_root(graph *g, int root) {
    initialize_search();
    bfs(g,root);
    for (int i=1; i<=g->nvertices; i++) {
        if (parent[i]!=-1) printf("%d ",parent[i]);
    }
}
int main() {
    int n,r1,r2; scanf("%d %d %d\n",&n,&r1,&r2);
    graph g; read_graph(&g,n,n-1,r1);
    new_root(&g,r2);
    return 0;
}
