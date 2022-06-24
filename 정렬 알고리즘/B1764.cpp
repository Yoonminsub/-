/*
*Author : minsub Yoon
*Date : 2022.3.4
*https://www.acmicpc.net/problem/1764
*/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
string A[500005];
string B[500005];
string C[500005];
int n,k;
int output(int i){
    int l=0;
    int h=n-1;
    int m;
    while(1){
        if(l>h){
            break;
        }
        m=(l+h)/2;
        if(B[i]>A[m]){
            l=m+1;
        }else if(B[i]<A[m]){
            h=m-1;
        }else{
            return 1;
        }
    }
    return 0;
}
int main(){
    scanf("%d %d",&n,&k);
    int i;
    for(i=0;i<n;i++){
        cin >> A[i] ;
    }
    for(i=0;i<k;i++){
        cin >> B[i] ;
    }
    sort(A,A+n);
    int z=0;
    for(i=0;i<k;i++){
        int t=output(i);
        if(t==1){
            C[z]=B[i];
            z++;
        }
    }
    sort(C,C+z);
    printf("%d\n",z);
    for(i=0;i<z;i++){
        cout << C[i] <<"\n";
    }
    return 0;
}
