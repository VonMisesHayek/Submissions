#include <stdio.h>
int convert(int h, int m) {
    return 60*h+m;
}
void print_time(int t) {
    int h=t/60,m=t%60;
    if (h<10 && m<10) {
        printf("0%d:0%d",h,m);
    } else if (h<10 && m>=10) {
        printf("0%d:%d",h,m);
    } else if (h>=10 && m<10) {
        printf("%d:0%d",h,m);
    } else {
        printf("%d:%d",h,m);
    }
}
void george(int h1, int m1, int h2, int m2) {
    int t1=convert(h1,m1),t2=convert(h2,m2);
    if (t1>=t2) {
        print_time(t1-t2);
    } else {
        print_time(1440+t1-t2);
    }
}
int main() {
    int h1,h2,m1,m2;
    scanf("%d:%d\n",&h1,&m1);
    scanf("%d:%d",&h2,&m2);
    george(h1,m1,h2,m2);
    return 0;
}
