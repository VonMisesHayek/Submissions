#include <stdio.h>
#include <string.h>
int is_plus(char* s) {
    int flag=-1;
    for (int i=0; i<3; i++) {
        if (s[i]=='+') flag=1;
    }
    return flag;
}
 
int main() {
    int n;
    int x=0;
    scanf("%d\n",&n);
    for (int i=0; i<n; i++) {
        char* s=(char*) malloc(3*sizeof(char));
        scanf("%s\n",s);
        x=x+is_plus(s);
    }
    printf("%d",x);
    return 0;
}
