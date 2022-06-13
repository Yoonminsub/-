/*
* 
* 2022.4.15
*https://www.acmicpc.net/problem/10814
*/
#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<pair<int,string> > qh;
int n;

bool cmp(pair<int,string> x, pair<int,string> y){
    if(x.first < y.first){
        return true;
    }else{
        return false;
    }
}
int main(){
    scanf("%d",&n);
    string A;
    int m;
    int i;
    for(i=0;i<n;i++){
        cin >> m >> A;
        qh.push_back({m,A});
    }

    stable_sort(qh.begin(),qh.end(), cmp);

    for(int i=0; i<n; i++){
        cout << qh[i].first <<" " <<qh[i].second <<'\n';
    }
}
