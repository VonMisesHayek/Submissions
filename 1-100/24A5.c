#include <stdio.h>
#include <stdlib.h>
#define MIN(a,b) ((a)<(b)) ? (a):(b)
#define MAXV 101
int discovered[MAXV];
int sumo=0,sumt=0,depth=0,cyc=0;
typedef struct edgenode {
    int y,w,o;
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
void insert_edge(graph *g, int x, int y, int w, int o) {
    edgenode *p=malloc(sizeof(edgenode));
    p->y=y; p->next=g->edges[x]; g->edges[x]=p; p->w=w; g->degree[x]++;
    p->o=o;
    if (o==1) insert_edge(g,y,x,w,0);
}
void initialize_search() {
    for (int i=0; i<MAXV; i++) discovered[i]=0;
}
void read_graph(graph *g, int n, int m) {
    int x,y,w;
    initialize_graph(g);
    g->nvertices=n;
    for (int i=0; i<m; i++) {
        scanf("%d %d %d\n",&x,&y,&w);
        insert_edge(g,x,y,w,1);
    }
}
void process_vertex(int y, int w, int o) {
    if (o==0) {
        sumo+=w;
    } else {
        sumt+=w;
    }
}
void dfs(graph *g, int v, int start) {
    edgenode *p; int y,w,o;
    discovered[v]=1;
    p=g->edges[v];
    while (p!=NULL) {
        y=p->y; w=p->w; o=p->o;
        if (discovered[y]==0) {
            process_vertex(y,w,o);
            depth++;
            dfs(g,y,start);
        } else if (y==start && depth==g->nvertices-1 && cyc==0) {
            process_vertex(start,w,o);
            cyc=1;
        }
        p=p->next;
    }
}
int cost(graph *g) {
    initialize_search(g);
    dfs(g,1,1);
    return MIN(sumo,sumt);
}
int main() {
    int n; scanf("%d\n",&n);
    graph g; read_graph(&g,n,n);
    printf("%d",cost(&g));
    return 0;
}
