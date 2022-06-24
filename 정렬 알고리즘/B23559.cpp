/*
*Author : minsub Yoon
*Date : 2022.1.21
*https://www.acmicpc.net/problem/23559
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int>> A;
vector<pair<int,int>> B;
int n,m;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    int x,y; //y=5000 x=1000
    x=m-1000*n;
    y=x/4000;
    x=n-y;
    int t=0;
    for(i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        A.push_back({b,a});
        B.push_back({a-b,i});
    }
    sort(B.rbegin(),B.rend());
    for(i=0;i<y;i++){
        if(B[i].first<=0){
            x++;
        }else{
            t+=A[B[i].second].second;
            A[B[i].second].first=0;
        }
    }
    sort(A.rbegin(),A.rend());
    for(i=0;i<x;i++){
        t+=A[i].first;
    }
    printf("%d",t);
    return 0;
}
