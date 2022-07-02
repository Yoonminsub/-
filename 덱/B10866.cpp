/*
*
*2022.1.15
*https://www.acmicpc.net/problem/10866
*/
#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;
deque<int> A;
string s;
int n;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        cin >> s;
        if(s=="push_front"){
            int t;
            scanf("%d",&t);
            A.push_front(t);
        }
        if(s=="push_back"){
            int t;
            scanf("%d",&t);
            A.push_back(t);
        }
        if(s=="pop_front"){
            int t=A.size();
            if(t==0){
                printf("-1");
            }else{
                printf("%d",A.front());
                A.pop_front();
            }
            printf("\n");
        }
        if(s=="pop_back"){
            int t=A.size();
            if(t==0){
                printf("-1");
            }else{
                printf("%d",A.back());
                A.pop_back();
            }
            printf("\n");
        }
        if(s=="size"){
            int t=A.size();
            printf("%d",t);
            printf("\n");
        }
        if(s=="empty"){
            int t=A.size();
            if(t==0){
                printf("1");
            }else {
                printf("0");
            }
            printf("\n");
        }
        if(s=="back"){
            int t=A.size();
            if(t==0){
                printf("-1");
            }else{
                printf("%d",A.back());
            }
            printf("\n");
        }
        if(s=="front"){
            int t=A.size();
            if(t==0){
                printf("-1");
            }else{
                printf("%d",A.front());
            }
            printf("\n");
        }
    }
    return 0;
}
