/*
*
*2022.1.12
*https://www.acmicpc.net/problem/1855
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
string A;
int n;
int main(){
    scanf("%d",&n);
    cin >> A;
    int b=A.length();
    int t=b/n;
    char B[t+5][n+5];
    int i,j;
    for(i=1;i<=t;i++){
        if(i%2==1){
            int m=i*n-n;
            for(j=1;j<=n;j++){
                B[i][j]=A[m];
                m++;
            }
        }else{
            int m=i*n-1;
            for(j=1;j<=n;j++){
                B[i][j]=A[m];
                m--;
            }
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=t;j++){
            printf("%c",B[j][i]);
        }
    }
    return 0;
}
