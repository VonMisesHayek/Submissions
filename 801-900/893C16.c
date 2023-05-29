#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MIN(a,b) ((a)<(b)) ? (a):(b)
#define MAXV 100001
typedef long long ll;
int discovered[MAXV];
ll cost[MAXV];
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
    int first;
    int last;
    int count;
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
    p->y=y; rp->y=x;
    p->next=g->edges[x]; rp->next=g->edges[y];
    g->edges[x]=p; g->edges[y]=rp;
    g->degree[x]++; g->degree[y]++;
    g->nedges++;
}
void read_graph(graph *g, int n, int m) {
    int x,y;
    initialize_graph(g);
    g->nvertices=n;
    for (int i=1; i<=m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y);
    }
}
void initialize_search(graph *g) {
    rep (i,1,MAXV) discovered[i]=0;
}
int bfs(graph *g, int start, int curr) {
    queue q;
    int v,y;
    edgenode *p;
    init_queue(&q);
    enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                enqueue(&q,y);
                discovered[y]=1;
                curr=MIN(curr,cost[y]);
            }
            p=p->next;
        }
    }
    return curr;
}
ll min_cost(graph *g) {
    initialize_search(g);
    ll res=0;
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            res+=bfs(g,i,cost[i]);
        }
    }
    return res;
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    rep (i,1,n+1) scanf("%I64d",(cost+i));
    graph g; read_graph(&g,n,m);
    printf("%I64d",min_cost(&g));
    return 0;
}
