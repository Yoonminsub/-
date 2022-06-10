/*
* Author : minsub Yoon
* Date : 2022.1.19
* https://www.acmicpc.net/problem/4948
*/
#include <iostream>
#include <algorithm>
using namespace std;
vector<pair<int,int>> A;
int n;
int main(){
    int i;
    for(i=0;i<=250000;i++){
        A.push_back({i,1});
    }
    A[0].second=0;
    A[1].second=0;
    for(i=0;i<=250000;i++){
        if(A[i].second==1){
            int a;
            int b=250000/i;
            for(a=2;a<=b;a++){
                A[i*a].second=0;
            }
        }
    }
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int t=0;
        int j;
        for(j=n+1;j<=2*n;j++){
            if(A[j].second==1){
                t=t+1;
            }
        }
        printf("%d\n",t);
    }
    return 0;
}
