#include<iostream>
using namespace std;
int main(){
    int n;cin >> n;
    int sum[2000000];
    for(int i=0;i<2000000;i++){
        sum[i] = 0;
    }
    int inf = 0;
    for(int i=0;i<n;i++){
        int a,b;cin >> a >> b;
        if(b>inf){
            inf = b;
        }
        sum[a] += 1;
        sum[b+1] -=1;
    }
    int ma = 0;
    int ans;
    for(int i=0;i<inf;i++){
        sum[i+1] += sum[i];
    }
    for(int i=0;i<=inf;i++){
       // cout << sum[i] << " ";
        if(ma < sum[i]){
            ma = sum[i];
        }
        
    }
    //cout << endl;
    cout << ma << endl;
    return 0;
}