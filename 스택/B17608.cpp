/*
*Author : minsub Yoon
*Date : 2020.9.18
*https://www.acmicpc.net/problem/17608
*/
#include <stdio.h>
int n;
int A[100005];
int main(){
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    int t;
    t=A[n];
    int a=1;
    for(i=n-1;i>0;i--){
        if(t<A[i]){
            t=A[i];
            a++;
        }
    }
    printf("%d",a);
    return 0;
}
