#include <stdio.h>
int choose(int n) {
    return (n*(n-1))/2;
}
int total(int *arr1, int *arr2, int length) {
    int res=0;
    for (int i=0; i<length; i++) {
        res+=(choose(arr1[i])+choose(arr2[i]));
    }
    return res;
}
int main() {
    int size;
    char ch;
    scanf("%d\n",&size);
    int rows[size],cols[size];
    for (int i=0; i<size; i++) {
        rows[i]=0;
        cols[i]=0;
    }
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            scanf("%c",&ch);
            if (ch=='C') {
                rows[i]++;
                cols[j]++;
            }
        }
        scanf("\n");
    }
    printf("%d",total(rows,cols,size));
    return 0;
}
