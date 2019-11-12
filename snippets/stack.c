#include <stdio.h>
struct node {
    struct node *next;
    int save;
};
typedef struct node *stack;
void push(stack *s, int data) {
    struct node *elem;
    elem=malloc(sizeof(struct node));
    elem->save=data;
    elem->next=*s;
    *s=elem;
}
int empty(stack *s) {
    return (*s==NULL);
}
int pop(stack *s) {
    struct node *elem;
    int res;
    if (empty(s)==0) {
        res=(*s)->save;
        elem=*s;
        *s=elem->next;
        free(elem);
        return res;
    } else {
        return -1;
    }
}
void print(stack *s) {
    struct node *elem;
    for (elem=*s; elem!=NULL; elem=elem->next) printf("%d ",elem->save);
    printf("\n");
}
int main() {
    stack s;
    s=NULL;
    for (int i=0; i<5; i++) {
        push(&s,i);
        print(&s);
    }
    for (int i=0; i<5; i++) {
        pop(&s);
        print(&s);
    }
    return 0;
}
