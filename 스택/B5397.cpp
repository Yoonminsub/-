/*
*Author : minsub Yoon
*Date : 2022.1.28
*https://www.acmicpc.net/problem/5397
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;
string C;
stack <char> A;
stack <char> B;
int n;
int main(){
    cin >> n;
    int i;
    for(i=0;i<n;i++){
        cin >> C;
        int t=C.size();
        int i;
        for(i=0;i<t;i++){
            if(C[i]=='<'&&A.size()>0){
                B.push(A.top());
                A.pop();
            }else if(C[i]=='-'&&A.size()>0){
                A.pop();
            }else if(C[i]=='>'&&B.size()>0){
                A.push(B.top());
                B.pop();
            }else if(C[i]!='<'&&C[i]!='>'&&C[i]!='-'){
                A.push(C[i]);
            }
        }
        while(1){
            if(A.size()<=0){
                break;
            }
            B.push(A.top());
            A.pop();
        }
        while(1){
            if(B.size()<=0){
                break;
            }
            printf("%c",B.top());
            B.pop();
        }
        C.clear();
        puts("");
    }

    return 0;
}
