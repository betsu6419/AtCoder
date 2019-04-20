#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    char in[n];cin >> in;
    int ans = 1000000000;
    int tans[n+1];
    bool count = false;
    char s[n];
    for(int i=0;i<n;i++){
        for(int j =0;j<i;j++){
            s[j] ='.'; 
        }
        for(int j=i;j<n;j++){
            s[j] = '#';
        }
        tans[i] = 0;
        for(int j=0;j<n;j++){
            if(in[j] != s[j]){
                tans[i] ++;
            }
        }
    }
    for(int j = 0;j<n;j++){
        s[j] = '.';
    }
    tans[n] = 0;
    for(int j=0;j<n;j++){
        if(in[j] !=s[j]){
            tans[n] ++;
        }
    }
    for(int i=0;i<n+1;i++){
        if(tans[i] < ans){
            ans = tans[i];
        }
    }
    cout << ans << endl;

    return 0;
}