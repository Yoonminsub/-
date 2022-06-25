/*
*
*2022.6.3
*https://www.acmicpc.net/problem/1655
*/
#include <iostream>
#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
int n;
priority_queue<int, vector<int>, greater<int> > A;
priority_queue<int> B;
int main(){
    scanf("%d",&n); // 100000
    int i;
    int t;
    scanf("%d",&t);
    printf("%d\n",t);
    for(i=2;i<=n;i++){ // 10만
        int a;
        scanf("%d",&a);
        if(a>t){
            A.push(a);
        }else{
            B.push(a);
        }
        if(B.size()-A.size()==1){
            printf("%d\n",B.top());
            A.push(t);
            t=B.top();
            B.pop();
        }else if(A.size()-B.size()==2){
            printf("%d\n",A.top());
            B.push(t);
            t=A.top();
            A.pop();
        }else{
            printf("%d\n",t);
        }

    }
    return 0;
}
