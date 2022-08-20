/*
*
*2022.4.9
*https://www.acmicpc.net/problem/11660
*/
#include <iostream>
#include <algorithm>
int n,m;
int A[1030][1030];
int B[1030][1030];
int main(){
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            B[i][j]=B[i-1][j]+B[i][j-1]+A[i][j]-B[i-1][j-1];
        }
    }
    for(i=0;i<m;i++){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        int t=B[x2][y2]-B[x1-1][y2]-B[x2][y1-1]+B[x1-1][y1-1];
        printf("%d\n",t);
    }
    return 0;
}
