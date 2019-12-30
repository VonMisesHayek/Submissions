#include <stdio.h>
int min(int x, int y) {
    return x*(x<=y)+y*(x>y);
}
int main() {
    int city,tank,curr=1,spend=0,vol=0;
    scanf("%d %d",&city,&tank);
    while (curr<city) {
        if (vol<(city-curr)) {
            spend+=(min(city-curr,tank)-vol)*curr;
            vol=min(tank,city-curr);
        }
        vol--;
        curr++;
    }
    printf("%d",spend);
    return 0;
}
