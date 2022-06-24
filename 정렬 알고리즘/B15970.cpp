/*
*Author : minsub Yoon
*Date : 2022.2.4
*https://www.acmicpc.net/problem/15970
*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int,int>>A;
int n;
int output(int a){
    int t=2100000000;
    int i;
    for(i=1;i<n;i++){
        if(a-i<0){
            if(A[a].second==A[a+i].second){
                if(t>abs(A[a+i].first-A[a].first)){
                    t=abs(A[a+i].first-A[a].first);
                }
            }
        }else if(a+i>=n){
            if(A[a].second==A[a-i].second){
                if(t>abs(A[a-i].first-A[a].first)){
                    t=abs(A[a-i].first-A[a].first);
                }
            }
        }else{
            if(A[a+i].second==A[a].second){
                if(t>abs(A[a+i].first-A[a].first)){
                    t=abs(A[a+i].first-A[a].first);
                }
            }
            if(A[a-i].second==A[a].second){
                if(t>abs(A[a-i].first-A[a].first)){
                    t=abs(A[a-i].first-A[a].first);
                }
            }
        }
    }
    return t;
}
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        A.push_back({a,b});
    }
    sort(A.begin(),A.end());
    int num=0;
    for(i=0;i<n;i++){
        num+=output(i);
    }
    printf("%d",num);
    return 0;
}
