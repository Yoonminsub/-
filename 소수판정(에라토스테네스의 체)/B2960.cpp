/*
* minsub Yoon
* 2022.1.19
*https://www.acmicpc.net/problem/2960
*/
#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int,int>> A;
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<=n;i++){
        A.push_back({i,1});
    }
    A[0].second=0;
    A[1].second=0;
    int t=0;
    for(i=2;i<=n;i++){
        if(A[i].second==1){
            int a;
            int b=n/i;
            for(a=1;a<=b;a++){
                if(A[i*a].second==1){
                    A[i*a].second=0;
                    t++;
                    if(t==m){
                        printf("%d",i*a);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
