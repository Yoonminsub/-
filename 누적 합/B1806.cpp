/*
*
*2022.3.18
*https://www.acmicpc.net/problem/1806
*/
#include <iostream>
#include <algorithm>
#include <stdio.h>
int n,m;
int A[100005];
int t;
int k=0;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        A[i]=a;
    }
    t=n;
    int f=0;
    int l=0;
    int s=A[0];
    while(1){
        if(l>=n){
            break;
        }
        if(s>=m){
            k=1;
            int c=l-f+1;
            if(c<t){
                t=c;
            }
            if(l==f){
                break;
            }else{
                s=s-A[f];
                f++;
            }

        }else{
            l++;
            s=s+A[l];
        }
    }
    if(k==0){
        printf("0");
    }else{
        printf("%d",t);
    }
    return 0;
}
