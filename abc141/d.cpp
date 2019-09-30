#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    priority_queue<long long> q;
    for(int i=0;i<n;i++){
        long long tmp;
        cin >> tmp;
        q.push(tmp);
    }
    for(int i=0;i<m;i++){
        long long tmp = q.top();
        q.pop();
        tmp /=2;
        q.push(tmp);
    }
    long long ans = 0;
    for(int i=0;i<n;i++){
        long long tmp = (long long)q.top();
        ans += tmp;
        q.pop();
    }
    cout << ans << endl;
    return 0;
}