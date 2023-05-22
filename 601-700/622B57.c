#include <stdio.h>
int final_time(int h, int m, int pass) {
    return 60*h+m+pass;
}
void conv(int tot, int *h, int *m) {
    *h=tot/60;
    *m=tot%60;
}
void print_time(int h, int m) {
    ((h%24)<10) ? printf("0%d",h%24):printf("%d",h%24);
    printf(":");
    (m<10) ? printf("0%d",m):printf("%d",m);
}
int main() {
    int hour,min,pass,h,m;
    scanf("%d:%d\n%d",&hour,&min,&pass);
    conv(final_time(hour,min,pass),&h,&m);
    print_time(h,m);
    return 0;
}
