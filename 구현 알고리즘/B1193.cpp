/*
*
*2022.5.4
*https://www.acmicpc.net/problem/1193
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
using namespace std;
int a;
int main(){
    scanf("%d",&a);
    int i;
    for(i=1;i<=10000000;i++){
        a=a-i;
        if(a<=0){
            break;
        }
    }
   // printf("%d   %d   ",i,a);
    int n,m;
    if(i%2==0){
        n=i;
        m=1;
        if(a==0){
            printf("%d/%d",n,m);
            return 0;
        }
        for(int j=1;j<a+i;j++){
            m=m+1;
            n=n-1;
        }
    }else{
        n=1;
        m=i;
        if(a==0){
            printf("%d/%d",n,m);
            return 0;
        }else{
            for(int j=1;j<a+i;j++){
                m=m-1;
                n=n+1;
                //printf ("%d %d\n",n,m);
            }
        }

    }
    printf("%d/%d",m,n);
    return 0;
}
