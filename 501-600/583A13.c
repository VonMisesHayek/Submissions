#include <stdio.h>
void initialize(int *arro, int *arrt, int length) {
    for (int i=0; i<length; i++) {
        *(arro+i)=0;
        *(arrt+i)=0;
    }
}
int check(int *arro, int *arrt, int x, int y) {
    if (*(arro+x-1)==0 && *(arrt+y-1)==0) {
        *(arro+x-1)=1;
        *(arrt+y-1)=1;
        return 1;
    } else {
        return 0;
    }
}
void print(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d ",*(arr+i));
    printf("\n");
}
int main() {
    int size,x,y,sq;
    scanf("%d\n",&size);
    sq=size*size;
    int hsieve[size],vsieve[size];
    initialize(hsieve,vsieve,size);
    for (int i=0; i<sq; i++) {
        scanf("%d %d\n",&x,&y);
        if (check(hsieve,vsieve,x,y)) printf("%d ",i+1);
    }
    return 0;
}
