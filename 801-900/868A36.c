#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void init(char **b, int length) {
    char curr[3];
    rep (i,0,length) {
        b[i]=(char*) malloc(3*sizeof(char));
        scanf("%s\n",curr);
        strcpy(b[i],curr);
    }
}
void destroy(char **b, int length) {
    rep (i,0,length) free(b[i]);
}
int unlock(char **b, char *p, int length) {
    rep (i,0,length) {
        rep (j,i,length) {
            if (b[i][1]==p[0] && b[j][0]==p[1]) return 1;
            if (b[i][0]==p[1] && b[j][1]==p[0]) return 1;
        }
        if (b[i][0]==p[0] && b[i][1]==p[1]) return 1;
    }
    return 0;
}
int main() {
    int len;
    char pass[3];
    scanf("%s\n%d\n",pass,&len);
    char *bark[len];
    init(bark,len);
    (unlock(bark,pass,len)) ? printf("YES"):printf("NO");
    destroy(bark,len);
    return 0;
}
