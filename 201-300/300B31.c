#include <stdio.h>
#include <stdlib.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
#define MAXV 49
int discovered[MAXV];
int size;
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
void read_graph(graph *g, int n, int m) {
    initialize_graph(g); g->nvertices=n;
    int x,y;
    rep (i,0,m) {
        scanf("%d %d\n",&x,&y);
        insert_edge(g,x,y,1);
    }
}
void initialize_search() {
    rep (i,0,MAXV) discovered[i]=0;
}
void process_vertex_early(int v) {
    size++;
}
void bfs(graph *g, int start, int print) {
    edgenode *p; int v,y; queue q;
    init_queue(&q); enqueue(&q,start);
    discovered[start]=1;
    while (empty_queue(&q)==0) {
        v=dequeue(&q);
        p=g->edges[v];
        process_vertex_early(v);
        if (print) printf("%d ",v);
        while (p!=NULL) {
            y=p->y;
            if (discovered[y]==0) {
                enqueue(&q,y);
                discovered[y]=1;
            }
            p=p->next;
        }
    }
}
void comp(graph *g) {
    queue q1,q2,q3; init_queue(&q1); init_queue(&q2); init_queue(&q3);
    int v,u;
    for (int i=1; i<=g->nvertices; i++) {
        if (discovered[i]==0) {
            size=0;
            bfs(g,i,0);
            if (size>3) {
                printf("-1");
                return;
            } else if (size==3) {
                enqueue(&q3,i);
            } else if (size==2) {
                enqueue(&q2,i);
            } else {
                enqueue(&q1,i);
            }
        }
    }
    if (q2.count>q1.count) {
        printf("-1"); return;
    }
    initialize_search();
    while (empty_queue(&q3)==0) {
        v=dequeue(&q3);
        bfs(g,v,1);
        printf("\n");
    }
    while (empty_queue(&q2)==0) {
        v=dequeue(&q1);
        u=dequeue(&q2);
        bfs(g,u,1);
        printf("%d\n",v);
    }
    while (empty_queue(&q1)==0) {
        int count=0;
        v=dequeue(&q1);
        count++;
        printf("%d ",v);
        if (count%3==0) printf("\n");
    }
}
int main() {
    int n,m; scanf("%d %d\n",&n,&m);
    graph g; read_graph(&g,n,m);
    comp(&g);
    return 0;
}
