#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> in(n); 
    vector<vector<int> > num(n,vector<int>(26,0));
    for(int i=0;i<n;i++){
        cin >> in[i];
        sort(in[i].begin(),in[i].end());
    }
    sort(in.begin(),in.end());
    long long ans = 0;
    long long tmp = 1;
    for(int i=0;i<n;i++){
        cout << in[i] << endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<10;j++){
            if(in[i][j] != in[i+1][j]){
                ans += (tmp)*(tmp-1)/2;
                tmp = 1;
                break;
            }   
            if(j == 9){
                tmp ++;
            }
        }
    }
    ans += tmp*(tmp-1)/2;
    cout << ans << endl;
    return 0;
}