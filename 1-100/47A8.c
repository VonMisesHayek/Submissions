#include <stdio.h>
int is_triangular(int n) {
    int sum=0,i=1;
    while (sum<n) {
        sum+=i;
        i++;
    }
    if (sum==n) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    scanf("%d",&n);
    if (is_triangular(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
