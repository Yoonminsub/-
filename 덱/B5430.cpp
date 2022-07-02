/*
*
*2022.1.26
*https://www.acmicpc.net/problem/5430
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;
int n;
string A;
string B;
deque<int> C;
int main(){
    scanf("%d",&n);
    int i;
    int j;
    for(i=0;i<n;i++){
        cin >> A;
        int m;
        scanf("%d",&m);
        cin >> B;
        int h=B.size();
        int a=0;
        for(j=1;j<h;j++){
            if(B[j]=='['||B[j]==','||B[j]==']'){
                //printf("%d ",a);
                if(a != 0){
                    C.push_back(a);
                }
                a=0;
            }else{
                a=a*10+B[j]-48;
            }
        }
        // C :
        // DD
        h=A.size();
        int l=1;
        for(j=0;j<h;j++){
            if(A[j]=='R'){
                l=l*(-1);
            }else if(A[j]=='D'){
                m--;
                if(m<0){
                    break;
                }
                if(l==1){
                    C.pop_front();
                }else{
                    C.pop_back();
                }
            }
        }
        if(m<0){
            printf("error");
        }else if(l==1){
            int t=C.size();
            printf("[");
            for(j=0;j<t;j++){
                printf("%d",C[j]);
                if(j!=t-1){
                    printf(",");
                }
            }
            printf("]");
        }else{
            int t=C.size();
            printf("[");
            for(j=t-1;j>=0;j--){
                printf("%d",C[j]);
                if(j!=0){
                    printf(",");
                }
            }
            printf("]");
        }
        puts("");
        C.clear();
        A.clear();
        B.clear();
    }
    return 0;
}
