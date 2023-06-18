#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MAXV 100001
typedef long long ll;
int discovered[MAXV];
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
void insert_edge(graph *g, int x, int y, int c, int und) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->c=c; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    if (und==1) {
        insert_edge(g,y,x,c,0);
        g->nedges++;
    }
}
void read_graph(graph *g, int n, int m) {
    initialize_graph(g); g->nvertices=n;
    int x,y,c;
    rep (i,0,m) {
        scanf("%d %d %d\n",&x,&y,&c);
        if (c==0) insert_edge(g,x,y,c,1);
    }
}
void initialize_search() {
    rep (i,0,MAXV) discovered[i]=0;
}
int bfs(graph *g, int start) {
    edgenode *p; int v,y; queue q; int res=0;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        res++;
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
    return res;
}
ll binpow(ll n, ll k, ll m) {
    ll res=1;
    while (k>0) {
        if (k&1) res=(res*n)%m;
        n=(n*n)%m;
        k>>=1;
    }
    return res;
}
ll good(graph *g, int k) {
    initialize_search();
    ll bad=0,curr,m=1000000007;
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            curr=bfs(g,i);
            bad+=binpow(curr,k,m);
        }
    }
    return ((binpow(g->nvertices,k,m)-bad)%m+m)%m;
}
int main() {
    int n,k; scanf("%d %d\n",&n,&k);
    graph g; read_graph(&g,n,n-1);
    printf("%d",good(&g,k));
    return 0;
}
