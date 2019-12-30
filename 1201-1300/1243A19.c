#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
void sort(int *arr, int length) {
    int temp;
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int square(int *arr, int length) {
    sort(arr,length);
    int res=0,comp;
    for (int i=0; i<length; i++) {
        comp=min(arr[i],length-i);
        if (res<comp) res=comp;
    }
    return res;
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&len);
        int plank[len];
        read(plank,len);
        printf("%d\n",square(plank,len));
    }
    return 0;
}
