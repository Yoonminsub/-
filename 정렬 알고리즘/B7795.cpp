/*
*Author : minsub Yoon
*Date : 2022.3.19
*https://www.acmicpc.net/problem/7795
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int T;
int A[20005];
int B[20005];
int main(){
    scanf("%d",&T);
    int i;
    for(i=0;i<T;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        int a,b;
        int j;
        int t=0;
        for(j=0;j<n;j++){
            scanf("%d",&A[j]);

        }
        for(j=0;j<m;j++){
            scanf("%d",&B[j]);
        }

        sort(A,A+n);

        sort(B,B+m);
        a=0;
        b=0;
        while(1){
            //printf("%d %d\n",A[a],B[b]);
            if(a>=n){
                break;
            }
            if(A[a]>B[b]){
                b++;
                t++;
            }else{
                a++;
                b=0;
            }
            if(b>=m){
                a++;
                b=0;
            }
        }
        printf("%d\n",t);
    }
}
