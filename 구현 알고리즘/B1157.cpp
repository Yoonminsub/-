/*
*
*2022.1.14
*https://www.acmicpc.net/problem/1157
*/
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string A;
int D[26];
int main(){
    cin >> A;
    int n=A.length();
    int i;
    for(i=0;i<n;i++){
        if(A[i]>='A'&&A[i]<='Z'){
            D[A[i]-'A']++;
        }else{
            D[A[i]-'a']++;
        }
    }
    int a=0;
    char b;
    for(i=0;i<26;i++){
        if(D[i]>a){
            a=D[i];
            b=i+'A';
        }else if(D[i]==a){
            b='?';
        }
    }
    cout << b << endl;
    return 0;
}
