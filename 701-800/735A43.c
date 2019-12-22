#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int max(int x, int y) {
    return -min(-x,-y);
}
int index(char *arr, int length, char ch) {
    for (int i=0; i<length; i++) {
        if (arr[i]==ch) return i;
    }
}
int can(char *arr, int length, int k, char grass, char targ) {
    int g=index(arr,length,grass),t=index(arr,length,targ);
    int fir=min(g,t),sec=max(g,t);
    if ((sec-fir)%k==0) {
        int lim=(sec-fir)/k;
        for (int i=1; i<lim; i++) {
            if (arr[fir+i*k]=='#') return 0;
        }
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int len,jump;
    scanf("%d %d\n",&len,&jump);
    char line[len];
    scanf("%s",line);
    if (can(line,len,jump,'G','T')) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
