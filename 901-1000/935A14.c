#include <stdio.h>
int ways(int employees) {
    int count=0;
    int lim=employees/2+1;
    for (int i=1; i<lim; i++) {
        if ((employees-i)%i==0) count++;
    }
    return count;
}
int main() {
    int num;
    scanf("%d",&num);
    printf("%d",ways(num));
    return 0;
}
