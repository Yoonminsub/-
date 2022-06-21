/*
*
*2022.2.5
*https://www.acmicpc.net/problem/15975
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int>>A;
int n;
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        A.push_back({b,a});
    }
    sort(A.begin(),A.end());
    long long num=0;
    for(i=0;i<n;i++){
        int t=0;
        int k=0;
        if(i==0){
            if(A[i].first==A[i+1].first){
                num+=abs(A[i].second-A[i+1].second);
            }
        }else if(i==n){
            if(A[i].first==A[i-1].first){
                num+=abs(A[i].second-A[i-1].second);
            }
        }else{
            if(A[i].first==A[i-1].first){
                t=abs(A[i].second-A[i-1].second);
            }
            if(A[i].first==A[i+1].first){
                k=abs(A[i].second-A[i+1].second);
            }
            if(t==0){
                num+=k;
            }else if(k==0){
                num+=t;
            }else{
                if(k>t){
                    num+=t;
                }else{
                    num+=k;
                }
            }

        }
    }
    printf("%lld",num);
    return 0;
}
