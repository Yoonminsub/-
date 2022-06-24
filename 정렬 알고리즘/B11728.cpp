/*
*Author : minsub Yoon
*Date : 2022.3.25
*https://www.acmicpc.net/problem/11728
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n,m;
int A[1000005];
int B[1000005];
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&B[i]);
    }
    sort(A,A+n);
    sort(B,B+m);
    int a=0;
    int b=0;
    while(1){
        if(a==n||b==m){
            break;
        }
        if(A[a]>B[b]){
            printf("%d ",B[b]);
            b++;
        }else{
            printf("%d ",A[a]);
            a++;
        }
    }
    for(i=a;i<n;i++){
        printf("%d ",A[i]);
    }
    for(i=b;i<m;i++){
        printf("%d ",B[i]);
    }
    return 0;
}
