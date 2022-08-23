/*
*
*2022.7.22
*https://www.acmicpc.net/problem/10986
*/
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int n,m;
int A[1000005];
int C[1000005];
long long B[1005];
long long t=0;
int main(){
    int i;
    scanf("%d %d",&n,&m);
    int a=0;
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
        a+=A[i];
        C[i]=a%m;
        a=C[i];
    }
    for(i=1;i<=n;i++){
        int a=C[i];
        B[a]++;
    }
    for(i=0;i<m;i++){
        if(i==0){
            t+=B[i];
        }
        if(B[i]>1){
            long long a=B[i];
            t+=a*(a-1)/2;
        }
    }
    printf("%lld",t);
    return 0;
}

