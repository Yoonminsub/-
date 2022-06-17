/*
*
*2022.3.25
*https://www.acmicpc.net/problem/2470
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int n;
int A[100005];
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    sort(A,A+n);
    int s=0;
    int l=n-1;
    int num=A[s]+A[l];
    int a=0;
    int b=n-1;
    int c=abs(num);
    while(1){
        if(s>=l){
            break;
        }
        if(abs(num)<c){
            c=abs(num);
            a=s;
            b=l;
        }
        if(num>0){
            num=num-A[l]+A[l-1];
            l--;
        }else{
            num=num-A[s]+A[s+1];
            s++;
        }
    }
    printf("%d %d",A[a],A[b]);
    return 0;
}
