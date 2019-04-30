#include<iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
long n;
long a;
int b;
long d[1000000];
priority_queue < long,vector<long>,greater<long> > q;
int main(){
    cin >> n >> a >> b;
    for(int i=0;i<b;i++){
        cin >> d[i];
        q.push(d[i]);
    }
    q.push(n+1);

    long before =0;
    long ans = n;
    while(!q.empty()){
        if(q.top() - before >a ){
            before += a;
            ans --;
        }
        else{
            before = q.top();
            ans --;
            q.pop();
        }
    }
    ans ++;
    cout << ans << endl;
    return 0;
}