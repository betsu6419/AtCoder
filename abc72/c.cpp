#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int in;cin >> in;
        a.push_back(in);
    }
    a.push_back(1000000);
    sort(a.begin(),a.end());
    vector<int> b(100001,0);
    int tmp=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            b[a[i]]+=tmp;
            tmp = 1;
        }
        else{
            tmp ++ ;
        }
    }
    int ans=0;
        for(int i=1;i<b.size()-1;i++){
            int t;
            t = b[i-1]+b[i] + b[i+1];
            if(t>ans){
                ans = t;
            }
        }
    cout << ans << endl;
    return 0;
}