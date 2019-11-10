#include <stdio.h>
void final(int *arr, int length) {
    int ser=0,dim=0,down=0,up=length-1,turn=0;
    while (down<=up) {
        if (turn%2==0) {
            if (arr[down]>arr[up]) {
                ser+=arr[down];
                down++;
            } else {
                ser+=arr[up];
                up--;
            }
        } else {
            if (arr[down]>arr[up]) {
                dim+=arr[down];
                down++;
            } else {
                dim+=arr[up];
                up--;
            }
        }
        turn++;
    }
    printf("%d %d",ser,dim);
}
int main() {
    int len;
    scanf("%d\n",&len);
    int cards[len];
    for (int i=0; i<len; i++) scanf("%d",&cards[i]);
    final(cards,len);
    return 0;
}
