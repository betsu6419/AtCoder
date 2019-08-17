#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
long long solve(vector <int> a,int b){
    long long ans = 0;
    for(int i=0;i<a.size();i++){
        ans += abs(a[i]-b);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector <int> in(n);
    for(int i=0;i<n;i++){
        cin >> in[i];
        in[i] -=i+1;
    }
    sort(in.begin(),in.end());
    int b = in[n/2];
    long long ans=solve(in,b);
    cout << ans <<endl;
    return 0;
}