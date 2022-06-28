/*
*
*2022.1.12
* https://www.acmicpc.net/problem/1032
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int n;
string A;
string B;
int C[60];
int main(){
    scanf("%d",&n);
    cin >> A;
    int i,j;
    int d=A.length();
    for(i=1;i<n;i++){
        cin >> B;
        for(j=0;j<d;j++){
            if(A[j]==B[j]){
                C[j]++;
            }
        }
    }
    for(i=0;i<d;i++){
        if(C[i]==n-1){
            printf("%c",A[i]);
        }else{
            printf("?");
        }
    }
    return 0;
}
