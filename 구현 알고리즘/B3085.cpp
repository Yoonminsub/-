/*
*
*2022.5.13
*https://www.acmicpc.net/problem/3085
*/
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int n;
string B;
int A[55][55];
int C[55][55];
int m=0;
void output(int i,int j){
    int t=0;
    int h=C[i][j];
    int x=i;
    int y=j;
    while(1){
        if(h!=C[x][y]){
            if(m<t&&n>=t){
                m=t;
            }
            break;
        }
        y++;
        t++;
    }
    x=i;
    y=j;
    t=0;
    while(1){
        if(h!=C[x][y]){
            if(m<t&&n>=t){
                m=t;
            }
            break;
        }
        x++;
        t++;
    }
    //printf("%d ",m);
}
void input(int i,int j){
    int f,g;
    if(i!=n-1&&A[i][j]!=A[i+1][j]){
        for(f=0;f<n;f++){
            for(g=0;g<n;g++){
                C[f][g]=A[f][g];
            }
        }
        int t=C[i][j];
        C[i][j]=C[i+1][j];
        C[i+1][j]=t;
        for(f=0;f<n;f++){
            for(g=0;g<n;g++){
                output(f,g);
            }
        }
    }
    if(j!=n-1&&A[i][j]!=A[i][j+1]){
        for(f=0;f<n;f++){
            for(g=0;g<n;g++){
                C[f][g]=A[f][g];
            }
        }
        int t=C[i][j];
        C[i][j]=C[i][j+1];
        C[i][j+1]=t;
        for(f=0;f<n;f++){
            for(g=0;g<n;g++){
                output(f,g);
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        cin >> B;
        for(int j=0;j<n;j++){
            if(B[j]=='C'){
                A[i][j]=1;
            }
            if(B[j]=='P'){
                A[i][j]=2;
            }
            if(B[j]=='Z'){
                A[i][j]=3;
            }
            if(B[j]=='Y'){
                A[i][j]=4;
            }
        }
    }
    
    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            input(i,j);
        }
    }
    printf("%d",m);
    return 0;
}
