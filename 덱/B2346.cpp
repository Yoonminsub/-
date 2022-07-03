/*
*
*2022.1.19
*https://www.acmicpc.net/problem/2346
*/
#include <algorithm>
#include <iostream>
#include <deque>
using namespace std;
int n;
deque<pair<int,int>> A;
deque<int> B;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        A.push_back({t,i+1});
    }
    int num;
    printf("%d ",A[0].second);
    num=A[0].first;
    B.push_back(num);
    A.pop_front();
    while(1){
        if(B.size()==n){
            break;
        }
        if(num>0){
            for(int y=0;y<num;y++){
                A.push_back({A[0].first,A[0].second});
                A.pop_front();
            }
            printf("%d ",A[A.size()-1].second);
            num=A[A.size()-1].first;
            B.push_back(num);
            A.pop_back();
        }else if(num<0){
            for(int y=0;y<abs(num);y++){
                A.push_front({A[A.size()-1].first,A[A.size()-1].second});
                A.pop_back();
            }
            printf("%d ",A[0].second);
            num=A[0].first;
            B.push_back(num);
            A.pop_front();
        }
    }
    return 0;
}
