#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
#include<string>
#include<cmath>
using namespace std;

int main(){
    int n;cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    a[n] =(int)2*1e9;
    int ans = 0;
    int tmp = 0;
    for(int i=0;i<n;i++){
        //cout << a[i] << endl;
        if(a[i+1] <= a[i] ){
            tmp ++;
        }
        else{
            if(ans < tmp){
                ans = tmp;
            }
            tmp = 0;
        }
    }
    cout << ans << endl;
    return 0;
}