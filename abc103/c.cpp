#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n ;
    long long ans=0;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        ans += tmp-1;
    }
    cout << ans << endl;
    return 0;
}