#include <stdio.h>
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
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d ",arr[i]);
}
int main() {
    int cols;
    scanf("%d\n",&cols);
    int box[cols];
    for (int i=0; i<cols; i++) scanf("%d",&box[i]);
    sort(box,cols);
    print(box,cols);
    return 0;
}
