#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MAX(a,b) ((a)>(b)) ? (a):(b)
#define MAXV 2001
int discovered[MAXV];
int dist[MAXV];
int height=0;
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
void insert_edge(graph *g, int x, int y) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; g->degree[x]++;
    g->nedges++;
}
void read_graph(graph *g, int n) {
    initialize_graph(g); g->nvertices=n;
    initialize_search();
    int x;
    rep (i,1,n+1) {
        scanf("%d\n",&x);
        if (x!=-1) {
            insert_edge(g,x,i);
        } else {
            discovered[i]=-1;
        }
    }
}
void initialize_search() {
    rep (i,0,MAXV) discovered[MAXV]=0;
    rep (i,0,MAXV) dist[i]=0;
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
                dist[y]=dist[v]+1;
                height=MAX(height,dist[y]);
            }
            p=p->next;
        }
    }
}
void search(graph *g) {
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==-1) bfs(g,i);
    }
}
int main() {
    int n; scanf("%d\n",&n);
    graph g; read_graph(&g,n);
    search(&g);
    printf("%d",height+1);
    return 0;
}
