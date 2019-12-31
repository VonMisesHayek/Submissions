#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void write(int *arr, int length) {
    for (int i=0; i<length; i++) printf("%d ",*(arr+i));
}
int main() {
    int words,len,leno,lent;
    scanf("%d %d\n",&words,&len);
    char *lang[len][2],temp1[11],temp2[11],notebook[11];
    int choose[len];
    for (int i=0; i<len; i++) {
        scanf("%s %s\n",temp1,temp2);
        leno=strlen(temp1);
        lent=strlen(temp2);
        lang[i][0]=malloc(sizeof(char)*(leno+1));
        lang[i][1]=malloc(sizeof(char)*(lent+1));
        strcpy(lang[i][0],temp1);
        strcpy(lang[i][1],temp2);
        if (leno<=lent) {
            choose[i]=0;
        } else {
            choose[i]=1;
        }
    }
    for (int i=0; i<words; i++) {
        scanf("%s",notebook);
        int j=0,keep=1,index;
        while (j<len && keep) {
            if (strcmp(lang[j][0],notebook)==0) {
                printf("%s ",lang[j][choose[j]]);
                keep=0;
            } else if (strcmp(lang[j][1],notebook)==0) {
                printf("%s ",lang[j][choose[j]]);
                keep=0;
            }
            j++;
        }
    }
    return 0;
}
