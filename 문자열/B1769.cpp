/*
*
*2022.1.12
*https://www.acmicpc.net/problem/1769
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string A;
void input(int a,int b){
    if(a==1){
        printf("%d ",b);
        int x=stoi(A);
        if(x%3==0){
            printf("YES");
        }else{
            printf("NO");
        }
        return ;
    }else{
        b++;
        int i;
        int t=0;
        for(i=0;i<a;i++){
            t=t+A[i]-48;
        }
        A=to_string(t); // "28"
    }
    int y=A.length();
    input(y,b);
}
int main(){
    cin >> A;
    int b=A.length();
    input(b,0);
    return 0;
}
