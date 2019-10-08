#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;cin >> n;
    vector<int> b;
    for(int i=0;i<n;i++){
        int tmp;cin >> tmp;
        b.push_back(tmp);
    }
    sort(b.begin(),b.end());
    cout << b[0] << endl;
    return 0;
}