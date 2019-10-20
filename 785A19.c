#include <stdio.h>
int main() {
    int lines;
    int tot=0;
    scanf("%d",&lines);
    for (int i=0; i<lines; i++) {
        char* poly=(char*) malloc(20*sizeof(char));
        scanf("%s",poly);
        if (poly[0]=='T') {
            tot+=4;
        } else if (poly[0]=='C') {
            tot+=6;
        } else if (poly[0]=='O') {
            tot+=8;
        } else if (poly[0]=='D') {
            tot+=12;
        } else {
            tot+=20;
        }
    }
    printf("%d",tot);
    return 0;
}
