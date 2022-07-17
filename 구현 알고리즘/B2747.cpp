/*
*
*2022.4.23
*https://www.acmicpc.net/problem/2747
*/
#include <stdio.h>
#include <iostream>
#include <algorithm>
int n;
int input(int a,int b, int c){
    if(c==n){
        return b;
    }
    int t=a+b;
    a=b;
    b=t;
    c++;
    return input(a,b,c);
}
int main(){
    scanf("%d",&n);
    int t=input(0,1,1);
    printf("%d",t);
    return 0;
}
