#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) *(arr+i)=0;
}
int count(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=arr[i];
    return res;
}
int subscription(int *arr, int length, int show, int d) {
    int lim=length-d+1,sieve[show],res=101,temp;
    for (int i=0; i<lim; i++) {
        initialize(sieve,show);
        for (int j=0; j<d; j++) sieve[arr[i+j]-1]=1;
        temp=count(sieve,show);
        if (res>temp) res=temp;
    }
    return res;
}
int main() {
    int queries,len,show,row,schedule[100];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d %d %d\n",&len,&show,&row);
        read(schedule,len);
        printf("%d\n",subscription(schedule,len,show,row));
    }
    return 0;
}
