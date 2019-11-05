#include <stdio.h>
void sort(int *arr, int length) {
    for (int i=0; i<length-1; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[j]<arr[i]) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int sum(int* arr, int length) {
    int lim=length/2;
    int count=0;
    for (int i=0; i<lim; i++) count+=(arr[2*i+1]-arr[2*i]);
    return count;
}
int main() {
    int students;
    scanf("%d",&students);
    int skills[students];
    for (int i=0; i<students; i++) scanf("%d",&skills[i]);
    sort(skills,students);
    printf("%d",sum(skills,students));
    return 0;
}
