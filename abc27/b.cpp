#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum%n !=0){
        cout << -1 << endl;
        return 0;
    }
    int ave = sum/n;
    sum = 0;
    int count = 0;
    int ans = n;
    for(int i=0;i<n;i++){
        sum +=a[i];
        count ++;
        if(sum == ave*count){
            ans --;
            count = 0;
            sum = 0;
        }
    }
    cout << ans << endl;
    return 0;
}