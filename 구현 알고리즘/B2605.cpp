/*
*
*2017.10.19
*https://www.acmicpc.net/problem/2605
*/
#include <stdio.h>
int n;
int A[105];
int B[105];
void input() {
    //freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        A[i]=i;
        scanf("%d",&B[i]);
    }
}
void print() {
    int i;
    for(i=1;i<=n;i++){
        printf("%d ",A[i]);
    }
    puts("");
}
void len() {
    int i,j;
    int m,t;
    for(i=1;i<=n;i++){
        t=A[i];
        for(j=i-1;j>i-1-B[i];j--){
            A[j+1]=A[j];
        }
        A[j+1]=t;
        //print();
    }
}
int main() {
    input();
    //print();
    len();
    print();
    return 0;
}

