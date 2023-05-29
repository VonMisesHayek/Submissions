#include <stdio.h>
#include <stdlib.h>
#define MAXV 100001
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
void initialize_graph(graph *g) {
    g->nvertices=0;
    g->nedges=0;
    for (int i=0; i<MAXV; i++) g->edges[i]=NULL;
    for (int i=0; i<MAXV; i++) g->degree[i]=0;
}
void insert_edge(graph *g, int x, int y) {
    edgenode *p=malloc(sizeof(edgenode)),*rp=malloc(sizeof(edgenode));
    p->y=y;
    rp->y=x;
    p->next=g->edges[x];
    rp->next=g->edges[y];
    g->edges[x]=p;
    g->edges[y]=rp;
    g->degree[x]++;
    g->degree[y]++;
    g->nvertices++;
}
void read_graph(graph *g, int n, int m) {
    int x,y;
    initialize_graph(g);
    g->nedges=n;
    for (int i=0; i<m; i++) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y);
    }
}
void topology(graph *g) {
    int n1=0,n2=0;
    for (int i=1; i<=g->nedges; i++) {
        if (g->degree[i]==1) n1++;
        if (g->degree[i]==2) n2++;
    }
    if (n1==2 && n2==g->nedges-2) {
        printf("bus");
    } else if (n1==0 && n2==g->nedges) {
        printf("ring");
    } else if (n1==g->nedges-1) {
        printf("star");
    } else {
        printf("unknown");
    } printf(" topology");
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    graph g; read_graph(&g,n,m);
    topology(&g);
    return 0;
}
