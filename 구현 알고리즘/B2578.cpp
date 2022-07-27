/*
*
*2022.2.5
*https://www.acmicpc.net/problem/2578
*/
#include <iostream>
int A[10][10];
int t=0;
int output(int a){
    int i,j;
    int n,m;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(A[i][j]==a){
                A[i][j]=0;
                n=i;
                m=j;
                break;
            }
        }
    }
    if(n==m){
        int r=0;
        for(i=0;i<5;i++){
            r+=A[i][i];
        }
        if(r==0){
            t++;
        }
    }
    if(n+m==4){
        int r=0;
        for(i=0;i<5;i++){
            r+=A[i][4-i];
        }
        if(r==0){
            t++;
        }
    }
    int p=0;
    int k=0;
    for(i=0;i<5;i++){
        p+=A[i][m];
        k+=A[n][i];
    }
    if(p==0){
        t++;
    }
    if(k==0){
        t++;
    }
    if(t>=3){
        return 2;
    }
    return 0;
}
int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=1;i<=25;i++){
        int a;
        scanf("%d",&a);
        if(output(a)==2){
            printf("%d",i);
            break;
        }
    }
    return 0;
}
