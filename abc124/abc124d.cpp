#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int n;cin >> n;
    string s;
    int ans = 0;
    queue<int> q;
    q.push(0);
    int k;cin >> k;
    cin >> s;
    bool zero_before = false;
    bool one_before = false;
    for(int i=0;i<n;i++){
        //cout << i << endl;
        if(s[i] == '0'){
            if(one_before&&(q.size()>k)){
                ans = max(i-q.front(),ans);
                q.pop();
            }
            zero_before = true;
            one_before = false;
        }
        else{
            if(zero_before){
                q.push(i);
            }
            zero_before = false;
            one_before = true;
        }

    } 
    ans = max(n-q.front(),ans);
    cout <<ans << endl;
}