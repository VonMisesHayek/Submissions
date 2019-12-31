#include <stdio.h>
#include <string.h>
int can(char *arr, long length) {
    for (int i=0; i<length-1; i++) {
        if (arr[i]==arr[i+1] && arr[i]!='?') return 0;
    }
    return 1;
}
char exclude(char x, char y) {
    int sieve[]={0,0,0};
    sieve[x-'a']=1;
    sieve[y-'a']=1;
    for (int i=0; i<3; i++) {
        if (sieve[i]==0) return (i+'a');
    }
}
char end(char x) {
    if (x=='?' || x=='b' || x=='c') {
        return 'a';
    } else {
        return 'b';
    }
}
void beautiful(char *str, long length) {
    if (length==1) {
        str[0]='a';
    } else {
        if (str[0]=='?') str[0]=end(str[1]);
        if (str[length-1]=='?') str[length-1]=end(str[length-2]);
        for (int i=1; i<length-1; i++) {
            if (str[i]=='?') str[i]=exclude(str[i-1],str[i+1]);
        }
    }
}
int main() {
    int queries;
    scanf("%d\n",&queries);
    char word[100001];
    long len;
    for (int i=0; i<queries; i++) {
        scanf("%s\n",word);
        len=strlen(word);
        if (can(word,len)) {
            beautiful(word,len);
            printf("%s\n",word);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
