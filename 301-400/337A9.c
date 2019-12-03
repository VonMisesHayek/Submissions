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
int select(int *arr, int length, int stu) {
    int min=arr[length-1],curr;
    for (int i=0; i<=length-stu; i++) {
        curr=arr[i+stu-1]-arr[i];
        if (curr<min) min=curr;
    }
    return min;
}
int main() {
    int buy,len;
    scanf("%d %d\n",&buy,&len);
    int puzzle[len];
    for (int i=0; i<len; i++) scanf("%d",&puzzle[i]);
    sort(puzzle,len);
    printf("%d",select(puzzle,len,buy));
    return 0;
}
