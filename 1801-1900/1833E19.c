#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MIN(a,b) ((a)<(b)) ? (a):(b)
#define MAXV 200001
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
        insert_edge(g,y,x,0); g->nedges++;
    }
}
void read_graph(graph *g, int n, int m) {
    initialize_graph(g); g->nvertices=n;
    int x;
    rep (i,0,m) {
        scanf("%d",&x);
        insert_edge(g,i+1,x,1);
    }
}
void initialize_search(int n) {
    rep (i,0,n+1) discovered[i]=0;
}
int process_vertex(graph *g, int y) {
    return (g->degree[y]==2);
}
int bfs(graph *g, int start) {
    edgenode *p; int v,y,res=g->degree[start],size=0; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        size++;
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                enqueue(&q,y);
                discovered[y]=1;
                res*=process_vertex(g,y);
            }
            p=p->next;
        }
    }
    return (res && size!=2);
}
void dance(graph *g) {
    initialize_search(g->nvertices);
    int comp=0,cyc=0;
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            comp++;
            cyc+=bfs(g,i);
        }
    }
    printf("%d %d\n",(comp-cyc>0)+cyc,comp);
}
int main() {
    int queries,n; scanf("%d\n",&queries);
    rep (i,0,queries) {
        scanf("%d\n",&n);
        graph g; read_graph(&g,n,n);
        dance(&g);
    }
    return 0;
}
