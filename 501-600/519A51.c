#include <stdio.h>
void update(char c, int *first, int *second) {
    switch (c) {
        case 'Q': (*first)+=9;
        break;
        case 'R': (*first)+=5;
        break;
        case 'B': (*first)+=3;
        break;
        case 'N': (*first)+=3;
        break;
        case 'P': (*first)++;
        break;
        case 'q': (*second)+=9;
        break;
        case 'r': (*second)+=5;
        break;
        case 'b': (*second)+=3;
        break;
        case 'n': (*second)+=3;
        break;
        case 'p': (*second)++;
    }
}
int main() {
    int one=0,two=0;
    char ch;
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            scanf("%c",&ch);
            update(ch,&one,&two);
        }
        scanf("\n");
    }
    if (one>two) {
        printf("White");
    } else if (one==two) {
        printf("Draw");
    } else {
        printf("Black");
    }
    return 0;
}
