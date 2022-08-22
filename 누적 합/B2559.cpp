/*
*
*2022.3.25
*https://www.acmicpc.net/problem/2559
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n,k;
int A[100005];
int main(){
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int s=0;
    int l=k;
    int sum=0;
    for(i=0;i<k;i++){
        sum+=A[i];
    }
    int t=sum;
    while(1){
        if(l>n){
            break;
        }
        if(t<sum){
            t=sum;
        }
        sum=sum-A[s]+A[l];
        s++;
        l++;
    }
    printf("%d",t);
    return 0;
}
