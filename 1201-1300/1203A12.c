#include <stdio.h>
#define rep(i,a,b) for (int i=a; i<b; i++)
void read(int *arr, int length) {
    rep (i,0,length) scanf("%d",(arr+i));
    scanf("\n");
}
int clockwise(int *arr, int length) {
    rep (i,0,length) {
        if (arr[i]!=(i+1)) return 0;
    }
    return 1;
}
int counterclockwise(int *arr, int length) {
    rep (i,0,length) {
        if (arr[i]!=(length-i)) return 0;
    }
    return 1;
}
void invert(int *arr, int s, int e) {
    int mid=(e-1-s)/2+1,temp;
    rep (i,0,mid) {
        temp=arr[s+i];
        arr[s+i]=arr[e-1-i];
        arr[e-1-i]=temp;
    }
}
void shift(int *arro, int *arrt, int length, int ind) {
    rep (i,0,length-ind) {
        *(arrt+i)=*(arro+ind+i);
    }
    rep (i,0,ind) {
        *(arrt+length-ind+i)=*(arro+i);
    }
}
int round_dance(int *arr, int length) {
    if (clockwise(arr,length)) {
        return 1;
    } else if (counterclockwise(arr,length)) {
        return 1;
    } else {
        int save[length],j=0;
        while (arr[j]!=length) j++;
        shift(arr,save,length,j);
        if (counterclockwise(save,length)) {
            return 1;
        } else {
            invert(save,1,length);
            return counterclockwise(save,length);
        }
    }
}
int main() {
    int queries,len;
    scanf("%d\n",&queries);
    for (int i=0; i<queries; i++) {
        scanf("%d\n",&len);
        int st[len];
        read(st,len);
        if (round_dance(st,len)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
