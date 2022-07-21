/*
*
*2022.1.10
*https://www.acmicpc.net/problem/10798
*/#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string A;
string B;
string C;
string D;
string E;
int main(){
    cin >> A >> B >> C >> D >> E ;
    int a,b,c,d,e;
    int t=0;
    a=A.length();
    if(a>t){
        t=a;
    }
    b=B.length();
    if(b>t){
        t=b;
    }
    c=C.length();
    if(c>t){
        t=c;
    }
    d=D.length();
    if(d>t){
        t=d;
    }
    e=E.length();
    if(e>t){
        t=e;
    }
    int i=0;
    while(i<=t){
        if(a>i){
            printf("%c",A[i]);
        }
        if(b>i){
            printf("%c",B[i]);
        }
        if(c>i){
            printf("%c",C[i]);
        }
        if(d>i){
            printf("%c",D[i]);
        }
        if(e>i){
            printf("%c",E[i]);
        }
        i++;
    }
    return 0;
}
