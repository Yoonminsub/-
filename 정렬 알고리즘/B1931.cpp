/*
*Author : minsub Yoon
*Date : 2022.1.21
*https://www.acmicpc.net/problem/1931
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int>> A;
int n;
int main(){
    scanf("%d",&n);
    int a,b;
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        A.push_back({a,b});
    }
    sort(A.begin(),A.end());
    int t=1;
    a=A[0].first;
    b=A[0].second;
    for(i=1;i<n;i++){
        if(A[i].second<b){
            a=A[i].first;
            b=A[i].second;
        }else if(A[i].first>=b){
            t++;
            a=A[i].first;
            b=A[i].second;
        }
        
    }
    printf("%d",t);
    return 0;
}
