#include <stdio.h>
int is_sorted_desc(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        if (arr[i]<arr[i+1]) return 0;
    }
    return 1;
}
int main() {
    int len,i=0,keep=1;
    scanf("%d\n",&len);
    int final[len],origin[len];
    while (i<len && keep) {
        scanf("%d %d",&final[i],&origin[i]);
        if (final[i]!=origin[i]) {
            keep=0;
            printf("rated");
        }
        i++;
    }
    if (keep) {
        if (is_sorted_desc(final,len)) {
            printf("maybe");
        } else {
            printf("unrated");
        }
    }
    return 0;
}
