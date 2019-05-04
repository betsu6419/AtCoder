#include<iostream>
using namespace std;
#define INF 356000000001LL
int N, M, K;
long long memo[400][400]={};
long long A[400];
long long dp(int i, int j){ //date,remainingDay
if(j == 0){
if(N <= i+K-1) return 0;
else return -INF;
}
if(memo[i][j] != 0) return memo[i][j];
memo[i][j] = -INF;
for(int k=0; k<K&&i+k<N; k++) memo[i][j] = max(memo[i][j],A[i+k]+dp(i+k+1,j-1));
return memo[i][j];
}

int main(){
cin >> N >> M >> K;
for(int i=0; i<N; i++) cin >> A[i];
cout << max(dp(0,M),-1LL) << endl;
return 0;
}