#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    bool sw = true;
    if(n%2 == 1){
        if(v[0] !=0){
            sw = false;
        }
        for(int i=0;i<n/2;i++){
            if(v[i*2+1] !=(i+1)*2 || v[i*2+2] != (i+1)*2){
                sw = false;
            } 
        }
    }
    else{
        for(int i=0;i<n/2;i++){
            if(v[i*2] != i*2+1 || v[i*2+1] != i*2+1){
                sw = false;
            }
        }
    }
    if(sw){
        long long ans = 1;
        for(long long i=0;i<n/2;i++){
            ans = (ans*(long long)2)%(long long)(1000000007);
        }
        cout << ans<< endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}