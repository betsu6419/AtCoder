#include<iostream>
using namespace std;
int n;
int d[1000000];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        d[i] = 0;
    }
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        d[a] ++;
    }
    int ans = 0;
    int sum = 0;
    bool sw = false;
    for(int i = 0;i<=100000;i++){
         sum+= d[i];
        if(sw){
            ans ++;
            if(sum > n/2){
                sw = false;
            }
        }
        if(sum == n/2){
            sw = true;
        }
        //cout << sum << endl;
        //cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}