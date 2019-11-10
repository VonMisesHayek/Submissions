#include <stdio.h>
#include <string.h>
void assign(char *list, int *lengths, int index, char *curr) {
    int len=strlen(curr);
    for (int i=0; i<len; i++) {
        *((list+index*100)+i)=*(curr+i);
    }
    lengths[index]=len;
}
int check(char *list, int *lengths, int index, char *curr) {
    int len=strlen(curr);
    for (int i=0; i<index; i++) {
        if (lengths[i]==len) {
            int is=1,pos=0;
            while (is && pos<len) {
                if (curr[pos]!=*((list+i*100)+pos)) is=0;
                pos++;
            }
            if (is) return 1;
        }
    }
    return 0;
}
void print(char *list, int *lengths, int index) {
    int ind=lengths[index];
    for (int i=0; i<ind; i++) printf("%c",*((list+index*100)+i));
    printf("\n");
}
int main() {
    int names;
    scanf("%d\n",&names);
    int lengths[names];
    char list[names][100];
    char curr[100];
    for (int i=0; i<names; i++) {
        scanf("%s",&curr);
        assign(list,lengths,i,curr);
        if (check(list,lengths,i,curr)) {
            printf("YES");
        } else {
            printf("NO");
        }
        printf("\n");
    }
    return 0;
}
