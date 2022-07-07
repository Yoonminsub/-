/*
*
*2020.5.17
*https://www.acmicpc.net/problem/13305
*/
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int n;
struct cit{
    long long x;
    long long y;
};
cit A[100005];
void input() {
    long long a=A[0].x*A[0].y;
    long long b=A[0].y;
    int i;
    for(i=1;i<n-1;i++){
        if(A[i].y<b){
            b=A[i].y;
        }
        a+=A[i].x*b;
    }
    printf("%lld",a);
}
int main() {
    scanf("%d",&n);
    int i;
    for(i=0;i<n-1;i++){
        scanf("%lld",&A[i].x);
    }
    for(i=0;i<n;i++){
        scanf("%lld",&A[i].y);
    }
    input();
    return 0;
}
