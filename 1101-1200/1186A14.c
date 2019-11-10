#include <stdio.h>
int min(int a, int b) {
    if (a<=b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    int part,pen,note;
    scanf("%d %d %d",&part,&pen,&note);
    if (part<=min(pen,note)) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
