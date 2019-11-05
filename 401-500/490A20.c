#include <stdio.h>
int min(int *arr, int length) {
    int min=arr[0];
    for (int i=1; i<length; i++) {
        if (arr[i]<min) min=arr[i];
    }
    return min;
}
int teams(int *arr, int length) {
    int counts[3]={0,0,0};
    for (int i=0; i<length; i++) counts[arr[i]-1]++;
    return min(counts,3);
}
void form(int *arr, int* crib, int length) {
    int keep[3]={1,1,1};
    for (int i=0; i<3; i++) {
        int j=0;
        while(keep[i] && j<length) {
            if (arr[j]==(i+1) && crib[j]==0) {
                keep[i]=0;
                crib[j]=1;
            }
            j++;
        }
        printf("%d ",j);
    }
    printf("\n");
}
int main() {
    int childs;
    scanf("%d",&childs);
    int skills[childs];
    int sieve[childs];
    for (int i=0; i<childs; i++) {
        scanf("%d",&skills[i]);
        sieve[i]=0;
    }
    int total=teams(skills,childs);
    printf("%d\n",total);
    for (int i=0; i<total; i++) form(skills,sieve,childs);
    return 0;
}
