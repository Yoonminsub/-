/*
*
*2021.5.11
*https://www.acmicpc.net/problem/19939
*/
#include <stdio.h>
int n;
int k;
int main(){
    scanf("%d %d",&n,&k);
    int i;
    int a=0;
    for(i=1;i<=k;i++){
        a+=i;
    }
    if(a>n){
        printf("-1");
    }else{
        int b=n-a;
        if(b%k==0){
            printf("%d",k-1);
        }else{
            printf("%d",k);
        }
    }
    return 0;
}
