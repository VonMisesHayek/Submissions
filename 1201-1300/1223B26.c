#include <stdio.h>
#define ABC 26
void initialize(int *arr, int length) {
    for (int i=0; i<length; i++) arr[i]=0;
}
void fill(char *arr, int *siev) {
    while (*arr) {
        siev[*arr-'a']=1;
        arr++;
    }
}
int are_equal(int *sievo, int *sievt, int length) {
    for (int i=0; i<length; i++) {
        if (sievo[i]==1 && sievt[i]==1) return 1;
    }
    return 0;
}
int equalize(char *arro, char *arrt) {
    int sievo[ABC],sievt[ABC];
    initialize(sievo,ABC);
    initialize(sievt,ABC);
    fill(arro,sievo);
    fill(arrt,sievt);
    return are_equal(sievo,sievt,ABC);
}
void solution(int q) {
    int first[100],second[100];
    for (int i=0; i<q; i++) {
        scanf("%s\n%s",first,second);
        if (equalize(first,second)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
int main() {
    int queries;
    scanf("%d\n",&queries);
    solution(queries);
    return 0;
}
