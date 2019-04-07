#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m ;
    vector<vector<char> > ans(n,vector<char>(n,'-'));
    int k,i,j;
    for(k = 0;k<m;k++){
        cin >> i >> j;
        ans[i-1][j-1] = 'o';
        ans[j-1][i-1] = 'x';
    }
    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            cout << ans[i][j];
            if(j != (n-1)){ 
                cout << ' ';
            };
        }
        cout << endl;
    }
}