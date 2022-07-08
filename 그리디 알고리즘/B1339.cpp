/*
*
*2022.4.6
*https://www.acmicpc.net/problem/1339
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n;
string A;
int B[30];
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        cin >> A;
        int t=A.length();
        int j;
        int f=1;
        for(j=t-1;j>=0;j--){
            B[A[j]-65]+=f;
            f=f*10;
        }
    }
    sort(B,B+30,greater<int>());
    int q=0;
    for(i=0;i<10;i++){
        q=q+B[i]*(9-i);
    }
    printf("%d",q);
    return 0;
}
