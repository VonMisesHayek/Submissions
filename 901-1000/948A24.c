#include <stdio.h>
void read(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) scanf("%c",((biarr+i*width)+j));
        scanf("\n");
    }
}
void write(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) printf("%c",*((biarr+i*width)+j));
        printf("\n");
    }
}
int can(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            if (*((biarr+i*width)+j)=='S') {
                if (i>0 && *((biarr+(i-1)*width)+j)=='W') return 0;
                if (i<length-1 && *((biarr+(i+1)*width)+j)=='W') return 0;
                if (j>0 && *((biarr+i*width)+j-1)=='W') return 0;
                if (j<width-1 && *((biarr+i*width)+j+1)=='W') return 0;
            }
        }
    }
    return 1;
}
void fill(char *biarr, int length, int width) {
    for (int i=0; i<length; i++) {
        for (int j=0; j<width; j++) {
            if (*((biarr+i*width)+j)=='S') {
                if (i>0 && *((biarr+(i-1)*width)+j)!='S') *((biarr+(i-1)*width)+j)='D';
                if (i<length-1 && *((biarr+(i+1)*width)+j)!='S') *((biarr+(i+1)*width)+j)='D';
                if (j>0 && *((biarr+i*width)+j-1)!='S') *((biarr+i*width)+j-1)='D';
                if (j<width-1 && *((biarr+i*width)+j+1)!='S') *((biarr+i*width)+j+1)='D';
            }
        }
    }
}
int main() {
    int len,wid;
    scanf("%d %d\n",&len,&wid);
    char past[len][wid];
    read(past,len,wid);
    if (can(past,len,wid)) {
        printf("Yes\n");
        fill(past,len,wid);
        write(past,len,wid);
    } else {
        printf("No");
    }
    return 0;
}
