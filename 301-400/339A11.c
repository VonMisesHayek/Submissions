#include <stdio.h>
#include <string.h>
void arrange(char *arr, int length) {
    int lim=length/2+1;
    for (int i=0; i<lim-1; i++) {
        for (int j=i+1; j<lim; j++) {
            if (arr[2*i]>arr[2*j]) {
                char temp=arr[2*i];
                arr[2*i]=arr[2*j];
                arr[2*j]=temp;
            }
        }
    }
}
int main() {
    char sum[100];
    scanf("%s",sum);
    arrange(sum,strlen(sum));
    printf("%s",sum);
    return 0;
}
