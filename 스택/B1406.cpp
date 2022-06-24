/*
*
*2022.1.28
*https://www.acmicpc.net/problem/1406
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
    cin >> C;
    int t;
    t=C.size();
    cin >> n;
    int i;
    for(i=0;i<t;i++){
        A.push(C[i]);
    }
    for(i=0;i<n;i++){
        char w;
        cin >> w;
        if(w=='L'){
            if(A.size()>0){
                B.push(A.top());
                A.pop();
            }
        }
        if(w=='D'){
            if(B.size()>0){
                A.push(B.top());
                B.pop();
            }
        }
        if(w=='B'){
            if(A.size()>0){
                A.pop();
            }
        }
        if(w=='P'){
            char d;
            cin >> d;
            A.push(d);
        }
    }
    if(A.size()>0){
        while(1){
            if(A.size()<=0){
                break;
            }
            B.push(A.top());
            A.pop();
        }
    }
    while(1){
        if(B.size()<=0){
            break;
        }
        printf("%c",B.top());
        B.pop();
    }
    return 0;
}
