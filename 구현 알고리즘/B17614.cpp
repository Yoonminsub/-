/*
*
*2022.1.31
*https://www.acmicpc.net/problem/17614
*/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int n;
int main() {
    scanf("%d",&n);
    int i;
    int t=0;
    for(i=1;i<=n;i++){
        int a,b,c,d,e,f;
        int s=i;
        a=s/1000000;
        s=s-a*1000000;
        b=s/100000;
        s=s-b*100000;
        c=s/10000;
        s=s-c*10000;
        d=s/1000;
        s=s-d*1000;
        e=s/100;
        s=s-e*100;
        f=s/10;
        s=s-f*10;
        if(a==3||a==6||a==9){
            t++;
        }
        if(b==3||b==6||b==9){
            t++;
        }
        if(c==3||c==6||c==9){
            t++;
        }
        if(d==3||d==6||d==9){
            t++;
        }
        if(e==3||e==6||e==9){
            t++;
        }
        if(f==3||f==6||f==9){
            t++;
        }
        if(s==3||s==6||s==9){
            t++;
        }
    }
    printf("%d",t);
    return 0;
}
