#include <stdio.h>
int main() {
    int magnets;
    int groups=0;
    scanf("%d",&magnets);
    char change='2';
    for (int i=0; i<magnets; i++) {
        char* mag=(char*) malloc(2*sizeof(char));
        scanf("%s",mag);
        if (mag[0]!=change) {
            groups++;
            change=mag[0];
        }
    }
    printf("%d",groups);
    return 0;
}
