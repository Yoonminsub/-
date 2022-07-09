/*
*
*2022.2.18
*https://www.acmicpc.net/problem/16953
*/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
queue<pair<int,int>> ch;
int n,m;
int t=0;
void output(){
    while(!ch.empty()){
        long long i=ch.front().first;
        int j=ch.front().second;
        if(i==m){
            t++;
            printf("%d",j);
            break;
        }
        ch.pop();
        if(i*2<=m){
            ch.push({i*2,j+1});
        }
        if(i*10+1<=m){
            ch.push({i*10+1,j+1});
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    ch.push({n,1});
    output();
    if(t==0){
        printf("-1");
    }
    return 0;
}
