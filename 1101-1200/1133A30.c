#include <stdio.h>
int tomin(int h, int m) {
    return h*60+m;
}
int tohour(int tot, int *h, int *m) {
    *h=tot/60;
    *m=tot%60;
}
void middle(int h1, int h2, int m1, int m2) {
    int h3,m3,mid=(tomin(h1,m1)+tomin(h2,m2))/2;
    tohour(mid,&h3,&m3);
    if (h3<10 && m3<10) {
        printf("0%d:0%d",h3,m3);
    } else if (h3<10 && m3>=10) {
        printf("0%d:%d",h3,m3);
    } else if (h3>=10 && m3<10) {
        printf("%d:0%d",h3,m3);
    } else {
        printf("%d:%d",h3,m3);
    }
}
int main() {
    int h1,h2,m1,m2;
    scanf("%d:%d\n%d:%d",&h1,&m1,&h2,&m2);
    middle(h1,h2,m1,m2);
    return 0;
}
