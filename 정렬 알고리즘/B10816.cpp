/*
*
*2022.3.4
*https://www.acmicpc.net/problem/10816
*/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int A[20000005];
int n,m;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int a;
        scanf("%d",&a);
        A[a+10000000]=A[a+10000000]+1;
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        int a;
        scanf("%d",&a);
        printf("%d ",A[a+10000000]);
    }
    return 0;
}
