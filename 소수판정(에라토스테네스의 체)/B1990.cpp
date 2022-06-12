/*
*Author : minsub Yoon
*Date : 2022.5.27
*https://www.acmicpc.net/problem/1990
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
using namespace std;
int n,m;
long long A[10000001];
int main(){
    scanf("%d %d",&n,&m);
    int i;
    if(m>10000000){
        m=10000000;
    }
    for(i=2;i<=m;i++){
        if(A[i]==0){
            for(int j=2;j<=m/i;j++){
                A[i*j]=1;
            }
            string a = to_string(i);
            string b=a;
            reverse(b.begin(),b.end());
            if(a==b&&i>=n){
                printf("%d\n",i);
            }
        }
    }
    printf("-1");
    return 0;
}
