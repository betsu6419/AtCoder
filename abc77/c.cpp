#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >>n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        b.push_back(tmp);
    }

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        c.push_back(tmp);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    long long ans = 0;
    for(int i=0;i<b.size();i++){
        long long  a_right = lower_bound(a.begin(),a.end(),b[i])-a.begin();
        long long  c_left =  c.end()-upper_bound(c.begin(),c.end(),b[i]);
        ans += a_right*c_left;
    }
    cout << ans << endl;
    return 0;
}