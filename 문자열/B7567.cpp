/*
*
*2022.1.21
*https://www.acmicpc.net/problem/7567
*/
#include <iostream>
#include <algorithm>
using namespace std;
string A;
int main(){
    cin >> A ;
    int a=A.size();
    int i;
    int t=10;
    for(i=1;i<a;i++){
        if(A[i]==A[i-1]){
            t=t+5;
        }else{
            t=t+10;
        }
    }
    printf("%d",t);
    return 0;
}
