/*
*
*2022.1.12
*https://www.acmicpc.net/problem/1159
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
string A;
string D="abcdefghijklmnopqrstuvwxyz";
string B;
int C[155];
int n;
int main(){
    scanf("%d",&n);
    int i;
    int a=D.length();
    for(i=0;i<n;i++){
        cin >> A ; 
        B+=A[0]; 
    }

    for(i=0;i<a;i++){
        while(1){
            int t;
            if(B.find(D[i])==string::npos){
                break;
            }else{
                t=B.find(D[i]);
                B[t]='*';
                C[i]++;
            }
        }
    }
    int t=0;
    for(i=0;i<a;i++){
        if(C[i]>=5){
            printf("%c",D[i]);
            t++;
        }
    }
    if(t==0){
        printf("PREDAJA");
    }
    return 0;
}
