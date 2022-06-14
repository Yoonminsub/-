/*
*
*2022.3.2
*https://www.acmicpc.net/problem/10815
*/
#include <iostream>
#include <algorithm>
using namespace std;
int A[500005];
int B[500005];
int n,m;
int output(int a){
    int i=1;
    int j=n;
    int s;
    // i : 5, j : 5, s : 5, a : 5
    // A : 1 2 3 4 5
    while(i<=j){
        s=(i+j)/2;
        //printf("%d %d ",i,j);
        if(A[s]>a){ // 4 > 5
            j=s-1;
        }else if(A[s] == a){
            return 1;
        }
        else{
            i=s+1;
        }
    }
    return 0;
}
int main(){
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        int a;
        scanf("%d",&a);
        A[i]=a;
    }
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        int a;
        scanf("%d",&a);
        B[i]=a;
    }
    sort(A+1,A+n+1);
    for(i=1;i<=m;i++){
        cout << output(B[i]) <<" ";
    }
    return 0;
}
