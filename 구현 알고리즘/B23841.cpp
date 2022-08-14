/*
*
*2022.1.12
*https://www.acmicpc.net/problem/23841
*/
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <string>
using namespace std;
int n,m;
string A;
int main(){
    scanf("%d %d",&n,&m);
    int i;
    for(i=0;i<n;i++){
        cin >> A ;
        int j;
        for(j=0;j<m/2;j++){
            if(A[j]!='.'){
                A[m-1-j]=A[j];
            }else if(A[m-j-1]!='.'){
                A[j]=A[m-1-j];
            }
        }
        cout << A << endl;
        A.clear();
    }
    return 0;
}
