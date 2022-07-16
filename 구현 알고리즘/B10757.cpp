/*
*
*2022.1.27
*https://www.acmicpc.net/problem/10757
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string A;
string B;
int C[10005];
int main(){
    cin >> A ;
    cin >> B ;
    int a,b;
    a=A.size();
    b=B.size();
    int i;
    if(a>b){
        for(i=0;i<b;i++){
            C[b-1-i]=B[i]-48;
        }
        i=0;
        while(1){
            if(a==0){
                if(C[i]==0){
                    i--;
                }
                break;
            }
            int t=C[i]+A[a-1]-48;
            C[i+1]=C[i+1]+t/10;
            C[i]=t%10;
            i++;
            a--;
        }
        int j;
        for(j=i;j>=0;j--){
            printf("%d",C[j]);
        }
    }else{
        for(i=0;i<a;i++){
            C[a-1-i]=A[i]-48;
        }
        i=0;
        while(1){
            if(b==0){
                if(C[i]==0){
                    i--;
                }
                break;
            }
            int t=C[i]+B[b-1]-48;
            C[i+1]=C[i+1]+t/10;
            C[i]=t%10;
            i++;
            b--;
        }
        int j;
        for(j=i;j>=0;j--){
            printf("%d",C[j]);
        }
    }
    return 0;
}
