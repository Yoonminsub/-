/*
*
*2022.1.13
*https://www.acmicpc.net/problem/1225
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string A;
string B;
int main(){
    cin >> A >> B;
    int a,b;
    a=A.length();
    b=B.length();
    int i,j;
    long long t=0;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            int n,m;
            n=A[i]-48;
            m=B[j]-48;
            t+=n*m;
        }
    }
    printf("%lld",t);
    return 0;
}
