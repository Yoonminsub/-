/*
*
*2022.4.9
*https://www.acmicpc.net/problem/2167
*/
#include <iostream>
#include <algorithm>
int n,m;
int k;
int A[305][305];
int B[305][305];
int main(){
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    scanf("%d",&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            B[i][j]=B[i-1][j]+B[i][j-1]+A[i][j]-B[i-1][j-1];
        }
    }
    for(i=0;i<k;i++){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int t=B[x2][y2]-B[x1-1][y2]-B[x2][y1-1]+B[x1-1][y1-1];
        printf("%d\n",t);
    }
    return 0;
}
