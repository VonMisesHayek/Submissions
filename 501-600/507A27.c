#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void bsort(int *arr, int length) {
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
void initialize(int *arr, int length, int val) {
    for (int i=0; i<length; i++) *(arr+i)=val;
}
void duplicate(int *arro, int *arrt, int length) {
    for (int i=0; i<length; i++) *(arrt+i)=*(arro+i);
}
void learn(int *arr, int length, int k) {
    int spent=0,count=0,pos=0,order[length],sieve[length],siv[length];
    duplicate(arr,order,length);
    bsort(order,length);
    initialize(sieve,length,0);
    initialize(siv,length,1);
    while (pos<length && spent<=k) {
        spent+=order[pos];
        if (spent<=k) {
            count++;
            sieve[pos]=1;
        }
        pos++;
    }
    printf("%d\n",count);
    for (int i=0; i<length; i++) {
        if (sieve[i]) {
            int j=0,keep=1;
            while (j<length && keep) {
                if (arr[j]==order[i] && siv[j]==1) {
                    siv[j]=0;
                    printf("%d ",j+1);
                    keep=0;
                }
                j++;
            }
        }
    }
}
int main() {
    int len,days;
    scanf("%d %d",&len,&days);
    int instrument[len];
    read(instrument,len);
    learn(instrument,len,days);
    return 0;
}
