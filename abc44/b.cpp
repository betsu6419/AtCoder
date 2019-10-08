#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main(){
    string w;cin >> w;
    if(w.size()%2 == 1){
        cout << "No" << endl;
        return 0;
    }
    sort(w.begin(),w.end());
    for(int i=0;i<w.size()/2;i++){
        if(w[2*i] != w[2*i+1]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;

}