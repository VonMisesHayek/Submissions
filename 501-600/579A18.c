#include <stdio.h>
typedef long long ll;
int main() {
    ll sample;
    scanf("%I64d",&sample);
    printf("%d",__builtin_popcountll(sample));
    return 0;
}
