/*
*Author : minsub Yoon
*Date : 2022.3.18
*https://www.acmicpc.net/problem/1940
*/
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int A[15005];
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        A[i]=a;
    }
    sort(A,A+n);
    int f=0;
    int l=n-1;
    int t=0;
    while(1){
        if(f>=l){
            break;
        }
        if(A[f]+A[l]>m){
            l--;
        }else{
            if(A[f]+A[l]==m){
                t++;
                f++;
                l=n-1;
            }else{
                f++;
                l=n-1;
            }
        }
    }
    printf("%d",t);
    return 0;
}
