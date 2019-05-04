#include <iostream>
using namespace std;
int n;
int m;
int k;
int a[1000];
long ans;
int main(){
    cin >> n >> m >> k;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ans = 0;
    int tans = 0;
    int num_now=0;
    int num_tans = 0;
    int count = 0;
    int i=1;
    while(i>n){
        if(a[i-1] > tans){
            tans = a[i-1];
            num_tans = i;
        }
        num_now ++;
        i++;
        if(num_now == k){
            ans += tans;
            i = num_tans +1;
            tans = 0;
            count ++;
            num_now = 0;
        }
    }
    ans += tans;
    count++;
    if(count>m){
        cout << "-1" << endl;
    }
    else{
        cout << ans << endl;
    }
    return 0;
}