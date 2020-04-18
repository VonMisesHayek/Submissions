#include <stdio.h>
#include <string.h>
int main() {
    int serve,comm;
    char name[11],ip[16],order[11];
    scanf("%d %d\n",&serve,&comm);
    char *store[serve][2];
    for (int i=0; i<serve; i++) {
        scanf("%s %s\n",name,ip);
        store[i][0]=(char*) malloc((strlen(name)+1)*sizeof(char));
        store[i][1]=(char*) malloc((strlen(ip)+1)*sizeof(char));
        strcpy(store[i][0],name);
        strcpy(store[i][1],ip);
    }
    for (int i=0; i<comm; i++) {
        scanf("%s %s\n",order,ip);
        ip[strlen(ip)-1]='\0';
        for (int j=0; j<serve; j++) {
            if (strcmp(store[j][1],ip)==0) printf("%s %s; #%s\n",order,ip,store[j][0]);
        }
    }
    for (int i=0; i<serve; i++) {
        free(store[i][0]);
        free(store[i][1]);
    }
    return 0;
}
