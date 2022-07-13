/*
*
*2021.1.14
*https://www.acmicpc.net/problem/10803
*/
#include <iostream>
#define DEBUG 0
using namespace std;
int DP[10005][105];
int n, m;
int main()
{
    cin >> n >> m;
    // DP테이블 채우는 이중반복문 시작.
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            // 아래 4개의 if문은 시간초과를 피하기 위한 아이디어들
            if(i%j == 0){
                DP[i][j] = i/j;
            }
            else if(j%i == 0){
                DP[i][j] = j/i;
            }
            else if(j > i * 5){
                DP[i][j] = DP[i][j-i] + 1;
            }
            else if(i > j * 5){
                DP[i][j] = DP[i-j][j] + 1;
            }
            // 위의 특수경우에 해당 안되는 경우
            else{
                if(DEBUG) cout << endl <<"Finding (" << i << ", " << j << ")" << endl;
                int minVal = 0x7FFFFFFF;
                for(int k = 1; k <= i/2; k++){
                    if(DEBUG) cout << k << " " << m << endl;
                    minVal = min(minVal, DP[k][j] + DP[i-k][j]);
                }
                for(int k = 1; k <= j/2; k++){
                    if(DEBUG) cout << k << " " << n << endl;
                    minVal = min(minVal, DP[i][k] + DP[i][j-k]);
                }
                DP[i][j] = minVal;
            }
            if(DEBUG) cout << DP[i][j] << " ";
        }
        if(DEBUG) cout << endl;
    }
    cout << DP[n][m];
    return 0;
}
