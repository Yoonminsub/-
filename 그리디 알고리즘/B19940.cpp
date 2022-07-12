/*
*
*2022.5.13
*https://www.acmicpc.net/problem/19940
*/
#include <iostream>
#include <stdio.h>
int n;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        int h=t;
        int a,b,c,d,e;
        a=h/60;
        h=h-60*a;
        b=h/10;
        h=h-10*b;
        c=0;
        d=h;
        e=0;
        if(d>=6){
            b++;
            e=10-d;
            d=0;
        }
        if(b>=4){
            a++;
            c=6-b;
            b=0;
            if(d==5){
                c--;
                d=0;
                e=5;
            }
        }
        printf("%d %d %d %d %d\n",a,b,c,d,e);
    }
    return 0;
}
