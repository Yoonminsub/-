/*
*Author : minsub Yoon
*Date : 2022.1.14
*https://www.acmicpc.net/problem/1026
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> A;
vector<int> B;
int n;
int main(){
    int j;
    scanf("%d",&n);
    for(j=0;j<n;j++){
        int t;
        cin >> t;
        A.push_back(t);
    }
    for(j=0;j<n;j++){
        int t;
        cin >> t;
        B.push_back(t);
    }
    sort(A.begin(),A.end());
    sort(B.rbegin(),B.rend());
    int a=0;
    for(j=0;j<n;j++){
        a=a+B[j]*A[j];
    }
    printf("%d",a);
    return 0;
}
