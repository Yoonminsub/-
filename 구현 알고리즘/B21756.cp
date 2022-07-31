/*
*
*2022.4.22
*https://www.acmicpc.net/problem/21756
*/
#include <stdio.h>
#include <iostream>
#include <algorithm>
int a;
int main(){
    scanf("%d",&a);
    int i=1;
    while(1){
        if(a/i==1){
            printf("%d",i);
            break;
        }else{
            i=i*2;
        }
    }
    return 0;
}
