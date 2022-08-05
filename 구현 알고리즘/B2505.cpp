/*
*
*2022.1.28
*https://www.acmicpc.net/problem/2505
*/
#include <iostream>

#include <algorithm>

#include <string>

#include <deque>

using namespace std;

int n;

int A[10005];

int B[10005];

int a1,b1,a2,b2;

int sa=1;

int output(int m){

    if(m==2){
        printf("%d %d\n%d %d",a1,b1,a2,b2);
        sa=1;
        return 0;
    }
    int q=m;
    int i;
    int j;
    for(i=n;i>1;i--){
        if(B[i]!=i){
            for(j=i-1;j>=1;j--){
                if(i==B[j]){
                    if(m==0){
                        a1=j;
                        b1=i;
                        int y=i-j;
                        for(int x=0;x<=y/2;x++){
                            int t=B[x+j];
                            B[x+j]=B[i-x];
                            B[i-x]=t;
                        }
                        m++;
                        output(m);
                    }else{
                        a2=j;
                        b2=i;
                        int y=i-j;
                        for(int x=0;x<=y/2;x++){
                            int t=B[i-x];
                            B[i-x]=B[j+x];
                            B[j+x]=t;
                        }
                        m++;
                        output(m);
                    }
                }
            }
        }
    }
    return 0;
}

void input(int m){

    if(m==2){

        int i;

        int a=0;

        for(i=1;i<=n;i++){

            if(A[i]!=i){

                a++;

                sa=-1;

                a1=1;

                b1=1;

                a2=1;

                b2=1;

                output(0);

            }

        }

        if(a==0){

            printf("%d %d\n%d %d",a1,b1,a2,b2);
            return;
        }

    }

    int q=m;

    int i;

    int j;

    for(i=1;i<n;i++){

        if(A[i]!=i){

            for(j=i+1;j<=n;j++){

                if(i==A[j]){

                    if(m==0){

                        a1=i;

                        b1=j;

                        int y=j-i;

                        for(int x=0;x<=y/2;x++){

                            int t=A[x+i];

                            A[x+i]=A[j-x];

                            A[j-x]=t;

                        }

                        m++;

                        input(m);

                    }else{

                        a2=i;

                        b2=j;

                        int y=j-i;

                        for(int x=0;x<=y/2;x++){

                            int t=A[x+i];

                            A[x+i]=A[j-x];

                            A[j-x]=t;

                        }

                        m++;

                        input(m);

                    }

                }

            }

        }

    }

    if(q==m&&sa==1){

        printf("%d %d\n%d %d",a1,b1,a2,b2);
        return;

    }

}

int main(){

    a1=1;

    b1=1;

    a2=1;

    b2=1;

    scanf("%d",&n);

    int i;

    int m=0;

    for(i=1;i<=n;i++){

        int t;

        scanf("%d",&t);

        A[i]=t;

        B[i]=t;

    }

    input(m);

    return 0;

}
