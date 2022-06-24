/*
*Author : minsub Yoon
*Date : 2022.5.27
*https://www.acmicpc.net/problem/1874
*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> B;
string C[200005];
int n;
int a,b,c;
int A[100005];
int main(){
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        scanf("%d",&A[i]);
    }
    a=0;
    int b=0;
    for(i=1;i<=n;i++){
        if(a<A[i]){
            int t=a;
            for(int j=0;j<A[i]-t;j++){
                a++;
                C[b]='+';
                B.push_back(a);
                b++;
            }
        }
        if(a>=A[i]){
            if(B.back()==A[i]){
                B.pop_back();
                C[b]='-';
                b++;
            }else{
                printf("NO");
                return 0;
            }
        }
    }
    for(int i=0; i<b; i++){
        cout << C[i] <<"\n";
    }

    return 0;
}
