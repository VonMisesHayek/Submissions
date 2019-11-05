#include <stdio.h>
int rank(int *arr, int length, int score) {
    int res=0;
    for (int i=0; i<length; i++) {
        if (arr[i]>score) res++;
    }
    return res+1;
}
int main() {
    int students;
    scanf("%d",&students);
    int scores[students];
    for (int i=0; i<students; i++) {
        int count=0;
        for (int j=0; j<4; j++) {
            int curr;
            scanf("%d",&curr);
            count+=curr;
        }
        scores[i]=count;
    }
    printf("%d",rank(scores,students,scores[0]));
    return 0;
}
