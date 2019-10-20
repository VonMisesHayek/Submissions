#include <stdio.h>
int main() {
    int len;
    int sea=0;
    int san=0;
    scanf("%d",&len);
    char cities[len];
    scanf("%s",cities);
    for (int i=0; i<len-1; i++) {
        if (cities[i]=='F' && cities[i+1]=='S') sea++;
        if (cities[i]=='S' && cities[i+1]=='F') san++;
    }
    if (san>sea) {
        printf("%s",(char*)"YES");
    } else {
        printf("%s",(char*)"NO");
    }
    return 0;
}
