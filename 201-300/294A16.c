#include <stdio.h>
void read(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",(arr+i));
}
void kill(int *arr, int length, int wire, int index) {
    if (wire==0) {
        if (length>1) arr[wire+1]+=(arr[wire]-index);
        arr[wire]=0;
    } else if (wire<(length-1)) {
        arr[wire-1]+=(index-1);
        arr[wire+1]+=(arr[wire]-index);
        arr[wire]=0;
    } else {
        arr[wire-1]+=(index-1);
        arr[wire]=0;
    }
}
int final(int *arr, int length, int shots) {
    int wir,dead;
    for (int i=0; i<shots; i++) {
        scanf("%d %d\n",&wir,&dead);
        kill(arr,length,wir-1,dead);
    }
    for (int i=0; i<length; i++) printf("%d\n",*(arr+i));
}
int main() {
    int len,shots;
    scanf("%d\n",&len);
    int wires[len];
    read(wires,len);
    scanf("%d\n",&shots);
    final(wires,len,shots);
    return 0;
}
