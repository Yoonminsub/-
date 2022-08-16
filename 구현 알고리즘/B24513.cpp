/*
*
*2022.3.12
*https://www.acmicpc.net/problem/24513
*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <stdio.h>
using namespace std;
int n,m;
int A[1005][1005];
int B[1005][1005];
queue<pair<int,int> >ac;
queue<int> X;
bool ch[1005][1005];
void output(){
    while(!ac.empty()){
        int i=ac.front().first;
        int j=ac.front().second;
        int t=A[i][j];
        int num=X.front();
        ac.pop();
        X.pop();
        //printf("%d ",t);
        if(t==1||t==2){
            if(i-1>=0&&ch[i-1][j]==false){
                if(B[i-1][j]==0){
                    A[i-1][j]=t;
                    ac.push({i-1,j});
                    X.push(num+1);
                    B[i-1][j]=num+1;
                }
                if(B[i-1][j]==num+1&&A[i-1][j]!=t){
                    A[i-1][j]+=t;
                    B[i-1][j]=num+1;
                    ch[i-1][j]=true;
                }
            }
            if(i+1<n&&ch[i+1][j]==false){
                if(B[i+1][j]==0){
                   // printf("1");
                    A[i+1][j]=t;
                    ac.push({i+1,j});
                    X.push(num+1);
                    B[i+1][j]=num+1;
                }
                if(B[i+1][j]==num+1&&A[i+1][j]!=t){
                    A[i+1][j]+=t;
                    B[i+1][j]=num+1;
                    ch[i+1][j]=true;
                }
            }
            if(j-1>=0&&ch[i][j-1]==false){
                if(B[i][j-1]==0){
                    A[i][j-1]=t;
                    ac.push({i,j-1});
                    X.push(num+1);
                    B[i][j-1]=num+1;
                }
                if(B[i][j-1]==num+1&&A[i][j-1]!=t){
                   // printf("1");
                   ch[i][j-1]=true;
                    A[i][j-1]+=t;
                    B[i][j-1]=num+1;
                }
            }
            if(j+1<m&&ch[i][j+1]==false){
                if(B[i][j+1]==0){
                    A[i][j+1]=t;
                    ac.push({i,j+1});
                    X.push(num+1);
                    B[i][j+1]=num+1;
                }
                if(B[i][j+1]==num+1&&A[i][j+1]!=t){
                   // printf("1");
                   ch[i][j+1]=true;
                    A[i][j+1]+=t;
                    B[i][j+1]=num+1;
                }
            }
            ch[i][j]=true;
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            int a;
            scanf("%d",&a);
            A[i][j]=a;
            if(a==1||a==2){
                ac.push({i,j});
                X.push(1);
                B[i][j]=1;
                ch[i][j]=true;
            }
            if(a==-1){
                B[i][j]=-1;
            }
        }
    }
    output();
    int a=0;
    int b=0;
    int c=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(A[i][j]==1){
                a++;
            }
            if(A[i][j]==2){
                b++;
            }
            if(A[i][j]==3){
                c++;
            }
           // printf("%d ",A[i][j]);
        }
        //puts("");
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
