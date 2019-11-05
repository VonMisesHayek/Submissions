#include <stdio.h>
int withdraw(char* s, int len) {
    int count=0;
    int i=0;
    while (i<len) {
        int j=1;
        while (s[i+j]==s[i]) {
            count++;
            j++;
        }
        i=i+j;
    }
    return count;
}
int main() {
    int length;
    char* stones=(char*) malloc(50*sizeof(char));
    scanf("%d",&length);
    scanf("%s",stones);
    printf("%d",withdraw(stones,length));
    return 0;
}
