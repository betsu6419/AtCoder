#include<iostream>

using namespace std;

int main(){
    char a[3];
    cin >> a;
    int ans = 700;
    for(int i=0;i<3;i++){
        if(a[i] == 'o'){
            ans += 100;
        }
    }
    cout << ans << endl;
    return 0;
}