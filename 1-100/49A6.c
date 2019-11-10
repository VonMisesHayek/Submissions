#include <stdio.h>
int isvow(char ch) {
    int upp=(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y');
    int low=(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y');
    return upp||low;
}
int main() {
    char prev,curr;
    while ((curr=getchar())!='?') {
        if (curr!=' ' && curr!='?') {
            prev=curr;
        }
    }
    if (isvow(prev)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
