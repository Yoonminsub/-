/*
*Author : minsub Yoon
*Date : 2022.3.11
*https://www.acmicpc.net/problem/24509
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>

using namespace std;
vector<pair<int,int> > A;
vector<pair<int,int> > B;
vector<pair<int,int> > C;
vector<pair<int,int> > D;
int n;
bool ch[200005];
bool comp(pair<int,int> x,pair<int,int> y){
    if (x.first > y.first){
        return true;
    }else{
        if(x.first == y.first){
            if(x.second < y.second){
                return true;
            }
        }
    }
    return false;

}
int main(){
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int a,b,c,d,e;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
        //printf("%d ",a);
        A.push_back({b,a});
        B.push_back({c,a});
        C.push_back({d,a});
        D.push_back({e,a});
    }
    sort(A.begin(),A.end(),comp);
    sort(B.begin(),B.end(),comp);
    sort(C.begin(),C.end(),comp);
    sort(D.begin(),D.end(),comp);
    int t=A[0].second;
    printf("%d ",t);
    ch[t]=true;
    i=0;
    while(1){
        t=B[i].second;
        if(ch[t]==true){
            i++;
        }else{
            ch[t]=true;
            i=0;
            break;
        }
    }
    printf("%d ",t);
    while(1){
        t=C[i].second;
        if(ch[t]==true){
            i++;
        }else{
            ch[t]=true;
            i=0;
            break;
        }
    }
    printf("%d ",t);
    while(1){
        t=D[i].second;
        //printf("%d\n",t);
        if(ch[t]==true){
            i++;
        }else{
            ch[t]=true;
            i=0;
            break;
        }
    }
    printf("%d ",t);
    return 0;
}

