#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
    scanf("\n");
}
int max(int x, int y) {
    return (x>=y) ? x:y;
}
int individual(int x, int m, int w) {
    return max((3*x)/10,x-(x*m)/250-50*w);
}
int score(int *m, int *w, int *s, int su, int un, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=individual(s[i],m[i],w[i]);
    return res+100*su-50*un;
}
int main() {
    int minutes[5],wrong[5],s,u,scores[]={500,1000,1500,2000,2500};
    read(minutes,5);
    read(wrong,5);
    scanf("%d %d",&s,&u);
    printf("%d",score(minutes,wrong,scores,s,u,5));
    return 0;
}
