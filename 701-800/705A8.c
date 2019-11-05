#include <stdio.h>
int main() {
    int layers;
    char* hate=(char*) "I hate";
    char* love=(char*) "I love";
    char* that=(char*) " that ";
    char* it=(char*) " it";
    scanf("%d",&layers);
    for (int i=0; i<layers; i++) {
        if (i>0) printf("%s",that);
        if (i%2==0) {
            printf("%s",hate);
        } else {
            printf("%s",love);
        }
    }
    printf("%s",it);
    return 0;
}
