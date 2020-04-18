#include <stdio.h>
int first_a(char *str, int length) {
    for (int i=0; i<length; i++) {
        if (*(str+i)=='A') return i;
    }
    return -1;
}
int moment(char *str, int length) {
    int index=first_a(str,length);
    if (index==-1) {
        return 0;
    } else {
        int max=0,prev=index;
        for (int i=index+1; i<length; i++) {
            if (*(str+i)=='A') {
                if ((i-prev-1)>max) max=i-prev-1;
                prev=i;
            }
        }
        if (length-prev-1>max) max=length-prev-1;
        return max;
    }
}
int main() {
    int queries,len;
    char conf[101];
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n%s\n",&len,conf);
        printf("%d\n",moment(conf,len));
    }
    return 0;
}
