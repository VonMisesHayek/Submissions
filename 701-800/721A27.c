#include <stdio.h>
void japanese(char *cross, int length) {
    int groups=0, in=0, glen=0, pos=0;
    int arr[length];
    while (*cross) {
        if (*cross=='B') {
            glen++;
            if (in==0) {
                groups++;
                in=1;
            }
        } else if (in && *cross=='W') {
            arr[pos]=glen;
            glen=0;
            in=0;
            pos++;
        }
        cross++;
    }
    if (in) {
        arr[pos]=glen;
        pos++;
    }
    printf("%d\n",groups);
    for (int i=0; i<pos; i++) printf("%d ",arr[i]);
}
int main() {
    int len;
    scanf("%d\n",&len);
    char word[len];
    scanf("%s",word);
    japanese(word,len);
    return 0;
}
