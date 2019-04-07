#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = 0;
    for(i=0;i<n;i++){
        if(a[a[i]-1]== (i+1) ){
            ans ++;
        }
    }
    ans = ans/2;
    cout << ans << endl;
    return 0;
}