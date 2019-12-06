#include <stdio.h>
void sort(int *arr, int *asoc, int length) {
    int temp;
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                temp=asoc[i];
                asoc[i]=asoc[j];
                asoc[j]=temp;
            }
        }
    }
}
int levelup(int *arr, int *asoc, int length, int *strength) {
    int pos=0;
    while (pos<length) {
        if (*strength<=arr[pos]) {
            return 0;
        } else {
            *strength+=asoc[pos];
        }
        pos++;
    }
    return 1;
}
int main() {
    int strength,dragons;
    scanf("%d %d\n",&strength,&dragons);
    int force[dragons],boost[dragons];
    for (int i=0; i<dragons; i++) scanf("%d %d\n",&force[i],&boost[i]);
    sort(force,boost,dragons);
    if (levelup(force,boost,dragons,&strength)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
