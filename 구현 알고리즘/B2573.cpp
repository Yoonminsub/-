/*
*
*2022.5.7
*https://www.acmicpc.net/problem/2573
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int n,m;
int A[305][305];
int B[305][305];
bool C[305][305];
int output(int i,int j){
    C[i][j]=true;
    if(i-1>=0&&A[i-1][j]>0&&C[i-1][j]==false){
        output(i-1,j);
    }
    if(j-1>=0&&A[i][j-1]>0&&C[i][j-1]==false){
        output(i,j-1);
    }
    if(i+1<n&&A[i+1][j]>0&&C[i+1][j]==false){
        output(i+1,j);
    }
    if(j+1<m&&A[i][j+1]>0&&C[i][j+1]==false){
        output(i,j+1);
    }
    return 0;
}
int input(int i, int j){
    int t=0;
    if(i-1>=0&&A[i-1][j]==0){
        t++;
    }
    if(j-1>=0&&A[i][j-1]==0){
        t++;
    }
    if(i+1<n&&A[i+1][j]==0){
        t++;
    }
    if(j+1<m&&A[i][j+1]==0){
        t++;
    }
    B[i][j]=t;
    return 0;
}
int main(){
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    int t=0;
    while(1){
        int a;
        a=0;
        int q=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i][j]!=0){
                    input(i,j);
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(A[i][j]!=0&&C[i][j]==false){
                    q=1;
                    a++;
                    //printf("i : %d j : %d ",i,j);
                    output(i,j);
                }
            }
        }
        //puts("");
        //printf("a : %d t : %d ",a,t);
        if(a>1){
            printf("%d",t);
            break;
        }
        if(q==0){
            printf("0");
            break;
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                C[i][j]=false;
                A[i][j]=A[i][j]-B[i][j];
                B[i][j]=0;
                if(A[i][j]<0){
                    A[i][j]=0;
                }
            }
        }
        t++;
    }
    return 0;
}
