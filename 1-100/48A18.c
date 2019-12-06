#include <stdio.h>
int play(char *arr1, char *arr2) {
    char rep1=arr1[0],rep2=arr2[0];
    if (rep1==rep2) {
        return 0;
    } else if ((rep1=='r' && rep2=='s') || (rep1=='s' && rep2=='p') || (rep1=='p' && rep2=='r')) {
        return 1;
    } else {
        return -1;
    }
}
int maxind(int *arr, int length) {
    int max=arr[0],pos=0;
    for (int i=1; i<length; i++) {
        if (max<arr[i]) {
            max=arr[i];
            pos=i;
        }
    }
    return pos;
}
void win(char *arr1, char *arr2, char *arr3) {
    int hist[3],best;
    hist[0]=play(arr1,arr2)+play(arr1,arr3);
    hist[1]=play(arr2,arr1)+play(arr2,arr3);
    hist[2]=play(arr3,arr1)+play(arr3,arr2);
    best=maxind(hist,3);
    if (hist[best]<2) {
        printf("?");
    } else if (best==0) {
        printf("F");
    } else if (best==1) {
        printf("M");
    } else if (best==2) {
        printf("S");
    }
}
int main() {
    char fyo[8],mat[8],sha[8];
    scanf("%s\n%s\n%s\n",fyo,mat,sha);
    win(fyo,mat,sha);
    return 0;
}
