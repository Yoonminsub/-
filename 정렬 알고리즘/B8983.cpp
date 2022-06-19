/*
*
*2020.3.21
*https://www.acmicpc.net/problem/8983
*/
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int g;
int a;
int l;
int A[100000];
struct _t{
    int x;
    int y;
};
_t B[100000];
void input(){
    //freopen("in.txt","r",stdin);
    scanf("%d %d %d",&g,&a,&l);
    int i;
    for(i=0;i<g;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<a;i++){
        scanf("%d %d",&B[i].x,&B[i].y);
    }
}
bool sf(int a, int b){
    return a<b;
}
bool sd(_t a, _t b){
    return a.x < b.x;
}
void bs(int idx){
    int s=0;
    int e=g-1;
    int mid;
    while (e>=s){
        mid=(s+e)/2;
        if(abs(A[mid]-B[idx].x)+B[idx].y<=l){
            n++;
            break;
        }
        if(abs(A[mid-1]-B[idx].x)<abs(A[mid+1]-B[idx].x)){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
}
int main () {
    input() ;
    sort(A,A+g,sf);
    sort(B,B+a,sd);
    int i;
    for(i=0;i<a;i++){
        bs(i);
    }
    printf("%d",n);
    return 0;
}
