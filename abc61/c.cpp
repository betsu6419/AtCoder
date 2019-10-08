#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    long long  n,k;
    cin >> n >> k;
    long long in[100001];
    memset(in,0,sizeof in);
    for(int i=0;i<n;i++){
        long long  a,b;
        cin >> a >> b;
        in[a] += b;
    }
    long long sum = 0;
    long long  ans;
    for(int i=1;i<=100000;i++){
        sum +=in[i];
        if(sum >= k){
            ans = i;
            break;
        } 
    }
    cout << ans << endl;
    return 0;
}