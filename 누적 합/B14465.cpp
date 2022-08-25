/*
*
*2022.3.25
*https://www.acmicpc.net/problem/14465
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n,m,k;
int A[100005];
int main(){
    scanf("%d %d %d",&n,&m,&k);
    int i;
    for(i=0;i<k;i++){
        int a;
        scanf("%d",&a);
        A[a]=1;
    }
    int s=1;
    int l=m+1;
    int sum=0;
    for(i=1;i<=m;i++){
        sum+=A[i];
    }
    int t=sum;
    while(1){
        if(l>n+1){
            break;
        }
        if(sum<t){
            t=sum;
        }
        sum=sum-A[s]+A[l];
        s++;
        l++;
    }
    printf("%d",t);
    return 0;
}
