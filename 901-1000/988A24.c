#include <stdio.h>
int diff(int *arr, int length, int elem) {
    int res=1;
    int i=0;
    while (i<length && res) {
        if (arr[i]==elem) res=0;
        i++;
    }
    return res;
}
int main() {
    int len,team,count=0;
    scanf("%d %d\n",&len,&team);
    int school[len];
    int ind[team];
    for (int i=0; i<len; i++) scanf("%d",&school[i]);
    int j=0;
    while (count<team && j<len) {
        if (diff(school,j,school[j])) {
            ind[count]=j+1;
            count++;
        }
        j++;
    }
    if (count==team) {
        printf("YES\n");
        for (int i=0; i<team; i++) printf("%d ",ind[i]);
    } else {
        printf("NO");
    }
    return 0;
}
