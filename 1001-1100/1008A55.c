#include <stdio.h>
#include <string.h>
int is_vowel(char ch) {
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int is_berlanese(char *arr, int length) {
    int pos=0;
    while (pos<length) {
        if (is_vowel(arr[pos])==0) {
            if (pos<length-1 && is_vowel(arr[pos+1])==0 && arr[pos]!='n') {
                return 0;
            } else if (pos==length-1 && arr[pos]!='n') {
                return 0;
            }
        }
        pos++;
    }
    return 1;
}
int main() {
    char word[100];
    scanf("%s",word);
    int len=strlen(word);
    if (is_berlanese(word,len)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
