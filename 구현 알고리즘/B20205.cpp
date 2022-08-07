/*
*
*2022.1.22
*https://www.acmicpc.net/problem/20205
*/
#include <iostream>
#include <algorithm>
int n,m;
int A[15][15];
int B[25][25];
int main(){
    scanf("%d %d",&n,&m);
    int i,j,a,b;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(a=0;a<m;a++){
            for(j=1;j<=n;j++){
                for(b=0;b<m;b++){
                    printf("%d ",A[i][j]);
                }
            }
            puts("");
        }
    }
    return 0;
}
