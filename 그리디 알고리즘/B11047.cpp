/*
*
*2018.1.15
*https://www.acmicpc.net/problem/11047
*/#include <stdio.h>
#define N 300
int n;
int a;
int A[N+5];
int t[N+5];
void input() {
    //freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&a);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
}
void output() {
    int i;
    int b=0;
    int e=0;
    for(i=n-1;i>=0;i--){
        if(a/A[i]!=0){
            t[b++]=a/A[i];
            a=a-t[b-1]*A[i];
        }
        if(a==0){
            break;
        }
    }
    for(i=0;i<b;i++){
        e=e+t[i];
    }
    printf("%d ",e);
}
int main() {
    input();
    output();
}
