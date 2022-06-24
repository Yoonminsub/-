/*
*Author : minsub Yoon
*Date : 2022.5.14
*https://www.acmicpc.net/problem/2504
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string A;
int a,b;
int main(){
    a=0;
    b=0;
    cin >> A;
    int n=A.size();
    int i;
    int ans=1;
    int t=0;
    for(i=0;i<n;i++){
        if(A[i]=='('){
            a++;
            ans=ans*2;
        }else if(A[i]=='['){
            b++;
            ans=ans*3;
        }else if(A[i]==')'){
            if(a>0){
                a--;
                if(A[i-1]=='('){
                    t+=ans;
                   }
                   ans=ans/2;
            }else{
                printf("0");
                return 0;
            }
        }else if(A[i]==']'){
            if(b>0){
                b--;
                if(A[i-1]=='['){
                    t+=ans;
                }
                ans=ans/3;
            }else{
                printf("0");
                return 0;
            }
        }else{
            printf("0");
            return 0;
        }
    }
    if(a+b>0){
        printf("0");
        return 0;
    }
    printf("%d",t);
    return 0;
}
