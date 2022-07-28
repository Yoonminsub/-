/*
*
*2020.11.1
*https://www.acmicpc.net/problem/10804
*/
#include <stdio.h>
int A[30];
struct as{
    int x;
    int y;
};
as B[20];
int main() {
    int i;
    for(i=1;i<=20;i++){
        A[i]=i;
    }
    for(i=0;i<10;i++){
        scanf("%d %d",&B[i].x,&B[i].y);
    }
    int j;
    for(i=0;i<10;i++){
        int t=B[i].x+B[i].y;
        for(j=B[i].x;j<=t/2;j++){
            int f=A[j];
            A[j]=A[t-j];
            A[t-j]=f;
        }
    }
    for(i=1;i<=20;i++){
        printf("%d ",A[i]);
    }
    return 0;
}
