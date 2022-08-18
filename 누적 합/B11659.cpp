/*
*
*2022.4.9
*https://www.acmicpc.net/problem/11659
*/
#include <iostream>
#include <algorithm>
int n,m;
int A[100005];
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        A[i]=A[i-1]+a;
    }
    for(i=0;i<m;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        int t=A[b]-A[a-1];
        printf("%d\n",t);
    }
    return 0;
}
