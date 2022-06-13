/*
*
*2022.1.31
*https://www.acmicpc.net/problem/2309
*/
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int A[15];
int main() {
    int i;
    int t=0;
    for(i=0;i<9;i++){
        scanf("%d",&A[i]);
        t+=A[i];
    }
    sort(A,A+9);
    int a,b;
    for(i=0;i<8;i++){
        for(int j=i+1;j<9;j++){
            if(t-A[i]-A[j]==100){
                a=i;
                b=j;
                break;
            }
        }
    }
    for(i=0;i<9;i++){
        if(i!=a&&i!=b){
            printf("%d\n",A[i]);
        }
    }
    return 0;
}
