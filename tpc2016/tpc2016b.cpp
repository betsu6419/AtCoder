#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;
vector<vector<string> > v;
int n;
string in;

int main(){
    cin >> in;
    n = in.size();
    v.at(2).push_back("()");

    for(int i=2;i<=n;i=i+2){
        
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