#include <stdio.h>
int press(int call) {
    int dig=call%10,res=10*(dig-1),count=0;
    while (call>0) {
        call/=10;
        count++;
        res+=count;
    }
    return res;
}
int main() {
    int queries,answer; scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&answer);
        printf("%d\n",press(answer));
    }
    return 0;
}
