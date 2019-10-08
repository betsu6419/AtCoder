#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <string> w(n);
    bool ans = true;
    for(int i=0;i<n;i++){
        cin >> w[i];
    }    
    for(int i=0;i<n-1;i++){
        if(w[i+1][0] !=w[i][w[i].size()-1]){
            cout << "No" << endl;
            return 0;
        }
    }
    sort(w.begin(),w.end());
    for(int i=0;i<n-1;i++){
        if(w[i].size()!=w[i+1].size()){
            continue;
        }
        for(int j=0;j<w[i].size();j++){
            if(w[i][j] !=w[i+1][j]){
                break;
            }
            if(j == w[i].size()-1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}