/*
*Author : minsub Yoon
*Date : 2022.4.30
*https://www.acmicpc.net/problem/23253
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<m;i++){
        int s;
        int t=200001;
        scanf("%d",&s);
        for(int j=0;j<s;j++){
            int a;
            scanf("%d",&a);
            if(t>a){
                t=a;
            }else{
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}
