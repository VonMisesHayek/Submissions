#include <stdio.h>
int winner(char* s, int len) {
    int anton=0;
    int danik=0;
    for (int i=0; i<len; i++) {
        if (s[i]=='A') {
            anton++;
        } else {
            danik++;
        }
    }
    return (anton>danik)-(anton<danik);
}
int main() {
    int n;
    scanf("%d",&n);
    char* games=(char*) malloc(n*sizeof(char));
    scanf("%s",games);
    int res=winner(games,n);
    if (res==1) {
        printf("%s",(char*)"Anton");
    } else if (res==0) {
        printf("%s",(char*)"Friendship");
    } else {
        printf("%s",(char*)"Danik");
    }
    return 0;
}
