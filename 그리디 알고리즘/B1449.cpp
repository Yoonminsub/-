/*
*
*2022.1.19
*https://www.acmicpc.net/problem/1449
*/
#include <iostream>
#include <algorithm>
#include <stdio.h>
int A[1005];
int n,l;
int main(){
    scanf("%d %d",&n,&l);
    int i;
    int t=0;
    for(i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        A[a]=1;
        if(t<a){
            t=a;
        }
    }
    int d=0;
    for(i=1;i<=t;i++){
        if(A[i]==1){
            int j;
            for(j=0;j<l;j++){
                A[i+j]=2;
            }
            d++;
        }
    }
    printf("%d",d);
    return 0;
}
