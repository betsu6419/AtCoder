#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<string> q;
int n;
string in;

int main(){
    cin >> in;
    n = in.size();
    q.push(("()"));
    string v;
    while(q.front().size() != n){
        v = q.front();
        q.push("("+v+")");
        q.push("()"+v);
        q.push(v+"()");
        q.pop();
    } 
    int ans = 100000000;
    while(!q.empty()){
        int tans = 0;
        string s = q.front();
        int last_i = 0;
        for(int i=0;i<n;i++){
            if(in[i] != s[i]){
                tans ++;
                last_i = i;
            }
        }
        tans += last_i;
        if(tans < ans){
            ans = tans;
        }
        q.pop();
    }
    cout << ans << endl;
}