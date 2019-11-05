#include <stdio.h>
#include <stdlib.h>
int rotations(char *s) {
    int count=0;
    char prev='0';
    while (*s) {
        if (prev=='0') {
            if (abs(*s-'a')<=13) {
                count+=abs(*s-'a');
            } else {
                count+=26-abs(*s-'a');
            }
        } else {
            if (abs(*s-prev)<=13) {
                count+=abs(*s-prev);
            } else {
                count+=26-abs(*s-prev);
            }
        }
        prev=*s;
        s++;
    }
    return count;
}
int main() {
    char name[100];
    scanf("%s",name);
    printf("%d",rotations(name));
    return 0;
}
