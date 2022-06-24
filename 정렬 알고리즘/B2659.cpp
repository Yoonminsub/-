/*
*Author : minsub Yoon
*Date : 2022.1.22
*https://www.acmicpc.net/problem/2659
*/
#include <iostream>
#include <algorithm>
#include <queue>
int n,m;
int A[9000];
int main(){
    int i;
    int a,b,c,d;
    int t;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    t=a*1000+b*100+c*10+d;
    for(i=0;i<3;i++){
        int s=a;
        a=b;
        b=c;
        c=d;
        d=s;
        s=a*1000+b*100+c*10+d;
        if(s<t){
            t=s;
        }
    }
    //printf("%d",t);
    A[0]=1;
    int u=1;
    for(i=1112;i<=9999;i++){
        int y=i;
        a=y/1000;
        y=y-a*1000;
        b=y/100;
        y=y-b*100;
        c=y/10;
        d=y-c*10;
        y=i;
        int j;
        for(j=0;j<3;j++){
            int s=a;
            a=b;
            b=c;
            c=d;
            d=s;
            s=a*1000+b*100+c*10+d;
            if(s<y){
                y=s;
            }
        }
        if(y==i){
            u=u+1;
            A[i-1111]=u;
        }
    }
    printf("%d",A[t-1111]);
    return 0;
}
