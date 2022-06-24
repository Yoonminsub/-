/*
*Author : minsub Yoon
*Date : 2022.1.21
* https://www.acmicpc.net/problem/1946
*/
#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int,int>> S;
int t;
int main(){
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        int m=1;
        int t;
        int a,b;
        int a1;
        scanf("%d",&t);
        for(j=0;j<t;j++){
            scanf("%d %d",&a,&b);
            S.push_back({a,b});
        }
        sort(S.begin(),S.end());
        a1=S[0].second;
        for(j=1;j<t;j++){
            if(a1>S[j].second){
                m++;
                a1=S[j].second;
            }
        }
        printf("%d\n",m);
        S.clear();
    }
    return 0;
}
