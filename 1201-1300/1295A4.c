#include <stdio.h>
void display(long n) {
    long half=n/2-1;
    if (n%2) printf("7");
    for (long i=0; i<half; i++) printf("1");
    if (n%2==0) printf("1");
    printf("\n");
}
int main() {
    int queries;
    long seg;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%ld\n",&seg);
        display(seg);
    }
    return 0;
}
