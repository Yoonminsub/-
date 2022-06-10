/*
* minsub Yoon
* 2022.2.22
*https://www.acmicpc.net/problem/1963
*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <string.h>
using namespace std;
int A[10000];
bool ch[10000];
int n;
queue<pair<int,int>> B;
int p;
void output(int g){
    while(!B.empty()){
        int a=B.front().first;
        int j=B.front().second;
        B.pop();
       // printf("%d %d",a,j);
        if(a==g){
            p=1;
            printf("%d\n",j);
            break;
        }
        int l=a/1000;
        int s=a/100-l*10;
        int m=a/10-s*10-l*100;
        int w=a-l*1000-s*100-m*10;
        for(int i=0;i<10;i++){
            int t1=i*1000+s*100+m*10+w;
            int t2=l*1000+i*100+m*10+w;
            int t3=l*1000+s*100+i*10+w;
            int t4=l*1000+s*100+m*10+i;
            if(i!=0){
                if(A[t1]==0&&ch[t1]==false){
                    ch[t1]=true;
                    B.push({t1,j+1});
                }
            }
            if(A[t2]==0&&ch[t2]==false){
                ch[t2]=true;
                B.push({t2,j+1});
            }
            if(A[t3]==0&&ch[t3]==false){
                ch[t3]=true;
                B.push({t3,j+1});
            }
            if(A[t4]==0&&ch[t4]==false){
                ch[t4]=true;
                B.push({t4,j+1});
            }
        }
    }
}
int main(){
    scanf("%d",&n);
    A[1]=1;
    int i;
    for(i=1;i<10000;i++){
        if(A[i]==0){
            int t=2;
            while(1){
                if(i*t>=10000){
                    break;
                }
                A[i*t]=1;
                t++;
            }
        }
    }
    for(i=0;i<n;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        B.push({a,0});
        ch[a]=true;
        p=0;
        output(b);
        if(p==0){
            printf("Impossible\n");
        }
        memset(ch,0,sizeof(ch));
        while(!B.empty()){
            B.pop();
        }
    }
}
