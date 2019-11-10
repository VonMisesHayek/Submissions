#include <stdio.h>
void assign(char *arr, int index) {
    char ch;
    for (int i=0; i<7; i++) scanf("%c",((arr+7*index)+i));
    scanf("\n");
}
int rooms(char *arr, int length) {
    int max=0;
    for (int i=0; i<7; i++) {
        int sum=0;
        for (int j=0; j<length; j++) sum+=(*((arr+j*7)+i)-'0');
        if (sum>max) max=sum;
    }
    return max;
}
int main() {
    int groups;
    scanf("%d\n",&groups);
    char schedule[groups][7];
    for (int i=0; i<groups; i++) assign(schedule,i);
    printf("%d",rooms(schedule,groups));
    return 0;
}
