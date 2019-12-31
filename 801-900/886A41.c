#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int sum(int *arr, int length) {
    int res=0;
    for (int i=0; i<length; i++) res+=*(arr+i);
    return res;
}
int equal(int *arr, int length) {
    int ref=sum(arr,length);
    for (int i=0; i<length-2; i++) {
        for (int j=i+1; j<length-1; j++) {
            for (int k=j+1; k<length; k++) {
                if ((2*(arr[i]+arr[j]+arr[k]))==ref) return 1;
            }
        }
    }
    return 0;
}
int main() {
    int score[6];
    read(score,6);
    if (equal(score,6)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
