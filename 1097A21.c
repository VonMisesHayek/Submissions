#include <stdio.h>
char* can(char* card, char* hand) {
    int can=0;
    while (*hand) {
        if (*hand==card[0] || *hand==card[1]) can=1;
        hand++;
    }
    if (can) {
        return (char*)"YES";
    } else {
        return (char*)"NO";
    }
}
int main() {
    char* card=(char*) malloc(2*sizeof(char));
    char* hand=(char*) malloc(14*sizeof(char));
    scanf("%s\n",card);
    scanf("%[^\n]s",hand);
    printf("%s",can(card,hand));
    return 0;
}
