/*
*
*2022.3.5
*https://www.acmicpc.net/problem/24510
*/
#include <iostream>
#include <string>
using namespace std;
int n;
int t=0;
string A ;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int j=0;
        cin >> A ;
        while(1){
            int h;
            if(A.find("for")==string::npos&&A.find("while")==string::npos){
                break;
            }
            if(A.find("for")!=string::npos){
                j++;
                h=A.find("for");
                A[h]='a';
                A[h+1]='a';
                A[h+2]='a';
            }
            if(A.find("while")!=string::npos){
                j++;
                h=A.find("while");
                A[h]='a';
                A[h+1]='a';
                A[h+2]='a';
                A[h+3]='a';
                A[h+4]='a';
            }
        }
        if(t<j){
            t=j;
        }
    }
    printf("%d",t);
}
