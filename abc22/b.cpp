#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    bool sw[1000000];
    for(int i=0;i<1000000;i++){
        sw[i] = false;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        if(sw[tmp]){
            ans ++;
        }
        else{
            sw[tmp] = true;
        }
    }
    cout << ans << endl;
    return 0;
}