#include <iostream>
using namespace std;

int main(){
    int n,s,t,w;
    cin >> n >> s >> t >> w;
    int ans = 0;
    if(w >= s && w <= t){
        ans ++;
    }
    for(int i=1;i<n;i++){
        int a;cin >> a;
        w += a;
        
        if(w >= s && w <= t){
            ans ++;
        }     
    }
    cout << ans << endl;
    return 0;
}