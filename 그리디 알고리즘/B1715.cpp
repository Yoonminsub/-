/*
*
*2020.3.8
*https://www.acmicpc.net/problem/1715
*/
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <iostream>
using namespace std;
int n;
priority_queue<int> cards;
int main(){
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        cards.push(-t);
    }
    int t=0;
    if(cards.size() == 1){
        printf("0");
        return 0;
    }
    while(!cards.empty()){
        int x=cards.top();
        cards.pop();
        int y=cards.top();
        cards.pop();
        t+=(x+y);
        if(cards.empty()){
            break;
        }
        cards.push((x+y));
    }
    printf("%d",-t);
    return 0;
}
