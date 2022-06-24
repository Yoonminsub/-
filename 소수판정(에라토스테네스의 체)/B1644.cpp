/*
*Author : minsub Yoon
*Date : 2022.3.19
*https://www.acmicpc.net/problem/1644
*/
#include <iostream>
#include <vector>
using namespace std;
int n;
int A[4000005];
vector<int> S;
int main(){
    scanf("%d",&n);
    int i;
    A[0]=1;
    A[1]=1;
    for(i=2;i<=n;i++){
        if(A[i]==0){
            int j;
            S.push_back(i);
            for(j=2;j<=n/i;j++){
                A[j*i]=1;
            }
        }
    }
    int t=S.size();
    int f=0;
    int l=0;
    int s;
    if(!S.empty()){
        s=S[0];
    }
    int m=0;
    while(1){
        //printf("%d ",s);
        if(l==t){
            break;
        }
        if(s>=n){
            if(s==n){
                m++;
            }
            s=s-S[f];
            f++;
        }else{
            l++;
            s=s+S[l];
        }
    }
    printf("%d",m);
    return 0;
}
