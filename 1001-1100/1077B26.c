#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=0;
}
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d",*(arr+i));
    printf("\n");
}
void fill(int *lights, int *arr, int length) {
    for (int i=1; i<length-1; i++) {
        if (lights[i-1]==1 && lights[i+1]==1 && lights[i]==0) {
            arr[i]=1;
        } else {
            arr[i]=0;
        }
    } arr[0]=0; arr[length-1]=0;
}
void neigh(int *dist, int *arr, int length) {
    initialize(arr,length);
    for (int i=1; i<length-1; i++) arr[i]+=(dist[i-1]+dist[i+1]);
    if (dist[1]) arr[0]=1;
    if (length>1 && dist[length-2]) arr[length-1]=1;
}
int count(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]==1) res++;
    }
    return res;
}
void update(int *lights, int *dist, int *arr, int length) {
    fill(lights,dist,length);
    neigh(dist,arr,length);
}
int del(int *lights, int *dist, int *arr, int length) {
    int res=0;
    while (count(dist,length)>0) {
        for (int i=0; i<length; i++) {
            if (arr[i]==2) {
                lights[i]=0;
                res++;
                update(lights,dist,arr,length);
            }
        }
        for (int i=0; i<length; i++) {
            if (arr[i]==1) {
                lights[i]=0;
                res++;
                update(lights,dist,arr,length);
            }
        }
    }
    return res;
}
void check(int *arro, int *arrt, int *arrth, int length) {
    print(arro,length); print(arrt,length); print(arrth,length);
}
int main() {
    int len;
    scanf("%d\n",&len);
    int flats[len],disturbed[len],jerks[len];
    read(flats,len);
    fill(flats,disturbed,len);
    neigh(disturbed,jerks,len);
    printf("%d",del(flats,disturbed,jerks,len));
    return 0;
}
