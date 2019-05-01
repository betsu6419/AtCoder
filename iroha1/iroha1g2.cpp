#include <iostream>
#include<algorithm>
#include<math.h>
#include<functional>
#define INF 1LL<<62
using namespace std;
int n;
int m;
int k;
long long a[365];
long long memo[365][365];
long long dp(int i,int j){
    if(j==0){
        if(n<=i+k-1){
            return 0;
        }
        else return -(INF);
    }
    if(memo[i][j] !=0){
        return memo[i][j];
    }
    memo[i][j] = -(INF);
    for(int l = 0;(l<k)&&(i+l<n);l++){
         memo[i][j]= max(memo[i][j],a[i+l]+dp(i+l+1,j-1));
    }
    return memo[i][j];
}

int main(){
    cin >> n >> m >>k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cout << max(dp(0,m),-1LL)<< endl;
}