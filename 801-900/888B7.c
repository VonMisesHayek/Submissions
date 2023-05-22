#include <stdio.h>
int min(int x, int y) {
    return (x<=y) ? x:y;
}
int move(int length) {
    int save[]={0,0,0,0};
    char curr;
    for (int i=0; i<length; i++) {
        scanf("%c",&curr);
        switch (curr) {
            case 'U':
                save[0]++;
                break;
            case 'D':
                save[1]++;
                break;
            case 'L':
                save[2]++;
                break;
            case 'R':
                save[3]++;
                break;
        }
    }
    return 2*(min(save[0],save[1])+min(save[2],save[3]));
}
int main() {
    int len; scanf("%d\n",&len);
    printf("%d",move(len));
    return 0;
}
