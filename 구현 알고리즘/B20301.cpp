/*
*
*2022.4.30
*https://www.acmicpc.net/problem/20301
*/
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;
int n,m,k;
deque <int> A;
int main(){
    scanf("%d %d %d",&n,&m,&k);
    int i;
    for(i=1;i<=n;i++){
        A.push_back(i);
    }
    for(i=0;i<n;i++){
        int ch=i/k;
        if(ch%2==0){
            for(int j=1;j<m;j++){
                int t=A.front();
                A.push_back(t);
                A.pop_front();
            }
        }else{
            for(int j=0;j<m;j++){
                int t=A.back();
                A.push_front(t);
                A.pop_back();
            }
        }
        printf("%d\n",A.front());
        A.pop_front();
    }
    return 0;
}
