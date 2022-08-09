/*
*
*2022.1.22
*https://www.acmicpc.net/problem/22341
*/
#include <iostream>
int n,c;
int main(){
    scanf("%d %d",&n,&c);
    int a,b; //a-->가로 b-->세로
    a=n;
    b=n;
    int i;
    for(i=0;i<c;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x<b&&y<a){
            if(y*b>x*a){
                a=y;
            }else{
                b=x;
            }
        }
    }
    int t=a*b;
    printf("%d",t);
    return 0;
}
