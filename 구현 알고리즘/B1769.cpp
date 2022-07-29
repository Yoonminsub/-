/*
*
*2022.7.29
*https://www.acmicpc.net/problem/1769
*/
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
string A;
void input(int t){
    int n=A.size();
    int s=0;
    int i;
    for(i=0;i<n;i++){
        s+=A[i]-48;
    }
    if(n==1){
        printf("%d\n",t);
        if(s%3==0){
            printf("YES");
        }else{
            printf("NO");
        }
    }else{
        t++;
        A=to_string(s);
        input(t);
    }
}
int main(){
    cin >> A ;
    input(0);
    return 0;
}
