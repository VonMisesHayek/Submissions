#include <stdio.h>
#define OPTIONS 5
void read(int *arr, int length, int width) {
    char ch;
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            scanf("%c",&ch);
            *((arr+i*width)+j)=(ch-'A');
        }
        scanf("\n");
    }
}
void write(int *arr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%d",*((arr+i*width)+j));
        printf("\n");
    }
}
void scan(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d ",*(arr+i));
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
int max(int *arr, int length) {
    int res=arr[0];
    for (int i=1; i<length; i++) {
        if (res<arr[i]) res=arr[i];
    }
    return res;
}
void frequency(int *biarr, int length, int width, int *arr, int opt) {
    int hist[opt];
    for (int j=0; j<width; j++) {
        initialize(hist,opt);
        for (int i=0; i<length; i++) hist[*((biarr+i*width)+j)]++;
        arr[j]=max(hist,opt);
    }
}
long inn(int *x, int *y, int length) {
    long res=0;
    for (int i=0; i<length; i++) res+=x[i]*y[i];
    return res;
}
int main() {
    int len,wid;
    scanf("%d %d\n",&len,&wid);
    int answer[len][wid],point[wid],maxfreq[wid];
    read(answer,len,wid);
    scan(point,wid);
    frequency(answer,len,wid,maxfreq,OPTIONS);
    printf("%ld",inn(maxfreq,point,wid));
    return 0;
}
