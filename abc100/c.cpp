#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long ans = 0;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        while(tmp%2 == 0){
            tmp /=2;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}