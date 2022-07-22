/*
*
*2022.5.10
*https://www.acmicpc.net/problem/2636
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
int n,m;
int A[105][105];
int B[105][105];
int Q[100];
void put(int i,int j){
    A[i][j]=3;
    if(A[i-1][j]==0){
        put(i-1,j);
    }
    if(A[i+1][j]==0){
        put(i+1,j);
    }
    if(A[i][j-1]==0){
        put(i,j-1);
    }
    if(A[i][j+1]==0){
        put(i,j+1);
    }
}
void output(int i,int j){
    if(A[i-1][j]==3){
        B[i][j]=1;
    }
    if(A[i+1][j]==3){
        B[i][j]=1;
    }
    if(A[i][j-1]==3){
        B[i][j]=1;
    }
    if(A[i][j+1]==3){
        B[i][j]=1;
    }
}
void input(int i,int j){
    A[i][j]=3;
    if(i-1>=0&&A[i-1][j]==0){
        input(i-1,j);
    }
    if(j-1>=0&&A[i][j-1]==0){
        input(i,j-1);
    }
    if(i+1<n&&A[i+1][j]==0){
        input(i+1,j);
    }
    if(j+1<m&&A[i][j+1]==0){
        input(i,j+1);
    }
}
int main(){
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    input(0,0);
    int t=0;
    int a;
    int num;
    while(1){
        a=0;
        num=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i][j]==1){
                    a=1;
                    num++;
                    output(i,j);
                }
            }
        }
        Q[t]=num;
        if(a==0){
            printf("%d\n%d",t,Q[t-1]);
            break;
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(B[i][j]==1){
                    A[i][j]=3;
                    B[i][j]=0;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i][j]==0){
                    if(A[i-1][j]==3||A[i][j-1]==3||A[i+1][j]==3||A[i][j+1]==3){
                        put(i,j);
                    }
                }
            }
        }
        t++;
    }
    return 0;
}
