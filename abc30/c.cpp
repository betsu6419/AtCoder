#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int x,y;
    cin >> x >> y;
    vector<int> a;vector<int> b;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }
    int now = 0;
    bool sw = true;
    int ans = 0;
    while(1){
        if(sw){
            int i=lower_bound(a.begin(),a.end(),now)-a.begin();
            if(i == n){
                break;
            }
            else{
                now = a[i] + x;
                sw = false;
                ans ++;
            }
        }
        else{
            int j = lower_bound(b.begin(),b.end(),now)-b.begin();
            if(j == m){
                break;
            }
            else{
                now = b[j] + y;
                sw = true;
                ans ++;
            }
        }
    }
    ans /=2;
    cout << ans << endl;
    return 0;
}