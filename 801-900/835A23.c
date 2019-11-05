#include <stdio.h>
int main() {
    int s,v1,v2,t1,t2;
    scanf("%d %d %d %d %d",&s,&v1,&v2,&t1,&t2);
    int first=s*v1+2*t1;
    int second=s*v2+2*t2;
    if (first<second) {
        printf("%s",(char*)"First");
    } else if (second<first) {
        printf("Second");
    } else {
        printf("Friendship");
    }
    return 0;
}
