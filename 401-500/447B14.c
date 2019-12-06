#include <stdio.h>
#include <string.h>
#define ABC 26
void readalpha(int *arr, int length) {
    for (int i=0; i<length; i++) scanf("%d",&arr[i]);
}
int max(int *arr, int length) {
    int res=arr[0];
    for (int i=1; i<length; i++) {
        if (res<arr[i]) res=arr[i];
    }
    return res;
}
long weight(char *arr, int length, int *vals) {
    long res=0;
    for (int i=0; i<length; i++) res+=((i+1)*vals[arr[i]-'a']);
    return res;
}
long gauss(int n) {
    return n*(n+1)/2;
}
long add(int *arr, int length, int app, int len) {
    int m=max(arr,length);
    return (gauss(app+len)-gauss(len))*m;
}
int main() {
    char word[1000];
    int append,len;
    int weights[ABC];
    scanf("%s\n%d\n",word,&append);
    len=strlen(word);
    readalpha(weights,ABC);
    printf("%ld",weight(word,len,weights)+add(weights,ABC,append,len));
    return 0;
}
