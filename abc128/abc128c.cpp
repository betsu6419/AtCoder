#include<iostream>
using namespace std;
int n;
int m;
int k[10];
int s[10];
int p[10];
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> k[i];
        for(int j=0;j<k[i];j++){
            int c;
            cin >> c;
            s[i] += 1<<(c-1);
        }
    }
    for(int i=0;i<m;i++){
        cin >> p[i];
    }
    int ans = 0;
    for(int i=0;i<(1<<n);i++){
        int tans = 0;
        int tans2 = 0;
        for(int k = 0;k<m;k++){
            for(int j=0;j<n;j++){
                if((1<<j)&s[j]){
                    tans ++;
                }
            }
            if(tans%2 == p[k]){
                tans2 ++;
            }
        }
        if(tans2 == m){
            ans ++;
        }
    }
    cout << ans << endl;
}