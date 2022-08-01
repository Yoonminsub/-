/*
*
*2018.5.15
*https://www.acmicpc.net/problem/13304
*/
#include <cstdio>
int A[7][2];
int n;
int k;
void input(){
    //freopen("in.txt","r",stdin);
    scanf("%d %d",&n,&k);
    int i;
    int j,f;
    for(i=0;i<n;i++){
        scanf("%d %d",&j,&f);
        A[f][j]++;
    }
}
void output() {
    int i,j;
    int o,p,t1,f,f1;
    int t=0;
    /*for(i=1;i<7;i++){
        for(j=0;j<2;j++){
            printf("%d",A[i][j]);
        }
        puts("");
    }*/
    o=A[1][0]+A[1][1]+A[2][0]+A[2][1];
    p=A[3][0]+A[4][0];
    t1=A[3][1]+A[4][1];
    f=A[5][0]+A[6][0];
    f1=A[5][1]+A[6][1];
    if(o%k!=0){
        t=t+o/k+1;
    }else{
        t=t+o/k;
    }
    if(p%k!=0){
        t=t+p/k+1;
    }else{
        t=t+p/k;
    }
    if(t1%k!=0){
        t=t+t1/k+1;
    }else{
        t=t+t1/k;
    }
    if(f%k!=0){
        t=t+f/k+1;
    }else{
        t=t+f/k;
    }
    if(f1%k!=0){
        t=t+f1/k+1;
    }else{
        t=t+f1/k;
    }
    printf("%d",t);
}
int main() {
    input();
    output();
    return 0;
}
