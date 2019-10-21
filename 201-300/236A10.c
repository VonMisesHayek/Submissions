#include <stdio.h>
#include <string.h>
int convert(char c) {
    return c-'a';
}
int tot(int* arr) {
	int count=0;
	for (int i=0; i<26; i++) {
		if (arr[i]==1) count++;
	}
	return count;
}
int main() {
    char name[100];
    int count=0;
    scanf("%s",name);
    int size=strlen(name);
    int dist[26];
    for (int i=0; i<26; i++) {
        dist[i]=0;
    }
    for (int i=0; i<size; i++) {
    	dist[convert(name[i])]=1;
	}
    if (tot(dist)%2==1) {
    	printf("%s",(char*)"IGNORE HIM!");
	} else {
		printf("%s",(char*)"CHAT WITH HER!");
	}
    return 0;
}
