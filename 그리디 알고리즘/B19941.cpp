/*
*
*2022.4.28
*https://www.acmicpc.net/problem/19941
*/
#include <iostream>
#include <algorithm>
using namespace std;
string A;
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    cin >> A ;
    int i;
    int ans=0;
    for(i=0;i<n;i++){
        if(A[i]=='P'){
            for(int j=i-m;j<=i+m;j++){
                if(A[j]=='H'){
                    A[j]='X';
                    ans++;
                    break;
                }
            }
        }
    }
    printf("%d",ans);
    return 0;
}
