/*
*Author : minsub Yoon
*Date : 2022.3.2
*https://www.acmicpc.net/problem/2548
*/
#include <iostream>
#include <algorithm>
using namespace std;
int A[500005];
int B[500005];
int n;
int output(int a){
    int i=1;
    int j=n;
    int s;
    // i : 5, j : 5, s : 5, a : 5
    // A : 1 2 3 4 5
    while(i<=j){
        s=(i+j)/2;
        //printf("%d %d ",i,j);
        if(A[s]>a){ // 4 > 5
            j=s-1;
        }else if(A[s] == a){
            return 1;
        }
        else{
            i=s+1;
        }
    }
    return 0;
}
int main(){
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        A[i]=a;
    }
    sort(A+1,A+n+1);
    int t=(1+n)/2;
    printf("%d",A[t]);
    return 0;
}
