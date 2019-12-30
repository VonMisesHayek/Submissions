#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
int move(int *arr, int index, int length) {
    for (int i=index+1; i<length; i++) {
        if (arr[i]==1) return (i-index);
    }
    return -1;
}
int operations(int *arr, int length) {
    int res=0,next,first=1;
    for (int i=0; i<length; i++) {
        if (arr[i]) {
            next=move(arr,i,length);
            if (next==1) {
                res++;
            } else if (next>=2) {
                res+=2;
            }
            if (first) res++;
            first=0;
        }
    }
    return res;
}
int main() {
    int len;
    scanf("%d\n",&len);
    int letter[len];
    read(letter,len);
    printf("%d",operations(letter,len));
    return 0;
}
