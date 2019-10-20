#include <stdio.h>
int times(int querie) {
    int res;
    int i=2;
    int cont=1;
    while (i<8 && cont) {
        int check=querie%i;
        if (check>=2 && check<=7) {
            cont=0;
            res=querie/i+1;
        } else if (check==0) {
            res=querie/i;
        }
        i++;
    }
    return res;
}
int main() {
    int queries;
    scanf("%d",&queries);
    for (int i=0; i<queries; i++) {
        int num;
        scanf("%d",&num);
        printf("%d\n",times(num));
    }
    return 0;
}
