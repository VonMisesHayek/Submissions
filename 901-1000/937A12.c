#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int awards(int *arr, int length) {
    int count=0, prev=arr[0];
    if (prev>0) count++;
    for (int i=1; i<length; i++) {
        if (arr[i]!=prev) {
            prev=arr[i];
            count++;
        }
    }
    return count;
}
int main() {
    int part;
    scanf("%d",&part);
    int scores[part];
    for (int i=0; i<part; i++) scanf("%d",&scores[i]);
    sort(scores,part);
    printf("%d",awards(scores,part));
    return 0;
}
