#include <iostream>
using namespace std;
int n;
int x;
int l[1000];
int main(){
    cin >> n >> x;
    for(int i=0;i<n;i++){
        cin >> l[i];
    }
    int ans = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += l[i];
        if(sum <= x){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}