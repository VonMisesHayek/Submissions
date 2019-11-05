#include <stdio.h>
int except(int *arr1, int *arr2, int length) {
    int count=0;
    for (int i=0; i<length; i++) {
        for (int j=0; j<length; j++) {
            if (arr1[i]==arr2[j]) count++;
        }
    }
    return count;
}
int main() {
    int teams;
    scanf("%d\n",&teams);
    int home[teams],guest[teams];
    for (int i=0; i<teams; i++) scanf("%d %d\n",&home[i],&guest[i]);
    printf("%d",except(home,guest,teams));
    return 0;
}
