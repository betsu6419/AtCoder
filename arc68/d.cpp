#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;cin >> n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] = 1e6;
    sort(a.begin(),a.end());
    int count = 0;
    int odd = 0;
    int even = 0;
    for(int i=0;i<n;i++){
        count ++;
        if(a[i] != a[i+1]){
            if(count %2 == 1){
                odd++;
                count = 0;
            }
            else{
                even ++;
                count = 0;
            }
        }
    }
    int ans = 0;
    if(even % 2 == 0){
        ans = odd + even;
    }
    else{
        ans = odd + even-1;
    }
    cout << ans << endl;
    return 0;
}