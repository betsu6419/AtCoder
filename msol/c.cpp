#include<iostream>
#include<cmath>
using namespace std;
int n;
int a,b,c;
long long memo[100000][100000];
int main(){
    cin >> n >> a >> b >> c;
    memo[1][0] = a;
    memo[0][1] = b;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            memo[i][j] = (memo[i-1][j]*a) + (memo[i][j-1]*b);
        }
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        cout << memo[n][i] <<endl;
        cout << memo[i][n]<<endl;
        ans += memo[n][i]*pow(100,n-i);
        ans += memo[i][n]*pow(100,n-i);
    }
    ans = ans * n;
    ans = ans %(int)(pow(10,9)+7);
    for(int i=1;i<(int)(pow(10,9)+7);i++){
        if((i*(int)pow(100,2*n-1))%(int)(pow(10,9)+7) ==ans){
            cout << i << endl;
            return 0;
        } 
    }
}