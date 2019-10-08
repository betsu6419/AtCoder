#include <iostream>
#include<string>
#include <vector>
#include <algorithm>
#include<cmath>
using namespace std;

int main(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<string> sub;
    for(int i=0;i<s.size();i++){
        int max = min(k,((int)s.size()-i));
        for(int j=1;j<=max ;j++){
            sub.push_back(s.substr(i,j));
        }
    }
    sort(sub.begin(),sub.end());
    sub.erase(unique(sub.begin(),sub.end()),sub.end());
    cout << sub[k-1] << endl;
    return 0;
}