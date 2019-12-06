#include <stdio.h>
int common(int *arr1, int *arr2, int len1, int len2) {
    int mini=10;
    for (int i=0; i<len1; i++) {
        for (int j=0; j<len2; j++) {
            if (arr1[i]==arr2[j] && arr1[i]<mini) mini=arr2[j]; 
        }
    }
    return mini*(mini<10);
}
int min(int *arr, int length) {
    int res=1000;
    for (int i=0; i<length; i++) {
        if (res>arr[i]) res=arr[i];
    }
    return res;
}
int answer(int *arr1, int *arr2, int len1, int len2) {
    int x=min(arr1,len1),y=min(arr2,len2);
    if (x<y) {
        return 10*x+y;
    } else {
        return 10*y+x;
    }
}
int main() {
    int n,m;
    scanf("%d %d\n",&n,&m);
    int list1[n],list2[m];
    for (int i=0; i<n; i++) scanf("%d",&list1[i]);
    scanf("\n");
    for (int j=0; j<m; j++) scanf("%d",&list2[j]);
    int save=common(list1,list2,n,m);
    if (save!=0) {
        printf("%d",save);
    } else {
        printf("%d",answer(list1,list2,n,m));
    }
    return 0;
}
