#include <stdio.h>
int antigauss(int n) {
    int res=1;
    while ((res*res)<(2*n)) res++;
    return res-1;
}
int index(int i) {
    return (i*i+i)/2;
}
int main() {
    int len;
    scanf("%d",&len);
    int root=antigauss(len);
    char crypt[len];
    char word[root+1];
    scanf("%s\n",crypt);
    for (int i=0; i<root; i++) word[i]=crypt[index(i)];
    word[root]='\0';
    printf("%s",word);
    return 0;
}
