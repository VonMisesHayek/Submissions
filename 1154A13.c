#include <stdio.h>
int maximum(int* s) {
    int res=s[0];
    for (int i=0; i<4; i++) {
        if (s[i]>res) res=s[i];
    }
    return res;
}
int main() {
    int a,b,c,s;
    scanf("%d %d %d %d",&a,&b,&c,&s);
    int nums[4]={a,b,c,s};
    int sup=maximum(nums);
    for (int i=0; i<4; i++) {
        if (nums[i]<sup) {
            printf("%d ",sup-nums[i]);
        }
    }
    return 0;
}
