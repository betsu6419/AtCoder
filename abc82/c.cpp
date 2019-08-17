#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] = 2000000000;
    sort(a.begin(),a.end());
    int ans = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i] > 100000){
            ans ++;
        }
        else{
            count ++;
            if(a[i] != a[i+1]){
                if(count >= a[i]){
                    ans += count-a[i];
                    count =0;
                }
                else{
                    ans += count;
                    count = 0;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}