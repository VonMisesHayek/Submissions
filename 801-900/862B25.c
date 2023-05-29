#include <stdio.h>
#include <stdlib.h>
#define MAXV 100001
#define NOCOLOR 0
#define RED 1
#define GREEN 2
typedef long long ll;
int discovered[MAXV];
int color[MAXV];
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
    for (int i=1; i<MAXV; i++) discovered[i]=0;
}
void bfs(graph *g, int start) {
    int v,y; queue q;
    edgenode *p;
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
                if (color[v]==GREEN) {
                    color[y]=RED;
                } else {
                    color[y]=GREEN;
                }
            }
            p=p->next;
        }
    }
}
void twocolor(graph *g) {
    for (int i=1; i<=g->nvertices; i++) color[i]=NOCOLOR;
    initialize_search();
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            color[i]=RED;
            bfs(g,i);
        }
    }
}
ll add(graph *g) {
    ll v=0,r=0;
    twocolor(g);
    for (int i=1; i<=g->nvertices; i++) {
        (color[i]==GREEN) ? v++:r++;
    }
    return v*r-(g->nvertices)+1;
}
int main() {
    int n; scanf("%d\n",&n);
    graph g; read_graph(&g,n,n-1);
    printf("%I64d",add(&g));
    return 0;
}
