/*
*
*2022.1.21
*https://www.acmicpc.net/problem/2775
*/
#include <iostream>
#include <algorithm>
using namespace std;
int A[20][20];
int t;
int main(){
    int i,j,k;
    scanf("%d",&t);
    for(i=0;i<=14;i++){
        for(j=1;j<=14;j++){
            if(i==0){
                A[i][j]=j;
            }else{
                for(k=1;k<=j;k++){
                    A[i][j]=A[i][j]+A[i-1][k];
                }
            }
        }
    }
    for(i=0;i<t;i++){
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d\n",A[n][m]);
    }
    return 0;
}
