#include <stdio.h>
#include <string.h>
int qaq(char *s, int length) {
    int count=0;
    int i=0;
    while (i<length-2) {
        if (s[i]=='Q') {
            int j=i+1;
            while (j<length-1) {
                if (s[j]=='A') {
                    int k=j+1;
                    while (k<length) {
                        if (s[k]=='Q') count++;
                        k++;
                    }
                }
                j++;
            }
        }
        i++;
    }
    return count;
}
int main() {
    char word[100];
    scanf("%s",word);
    int len=strlen(word);
    printf("%d",qaq(word,len));
    return 0;
}
