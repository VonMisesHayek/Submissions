#include <stdio.h>
int main() {
    int prob,skill;
    scanf("%d %d",&prob,&skill);
    int arr[prob];
    int left=0;
    int right=prob-1;
    int count=0;
    for (int i=0; i<prob; i++) {
        int num;
        scanf("%d",&num);
        arr[i]=num;
    }
    while ((arr[left]<=skill || arr[right]<=skill) && count<prob) {
        if (arr[left]<=skill) {
            left++;
        } else {
            right--;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}
