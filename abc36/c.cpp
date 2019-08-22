#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> a;
    int a2[n];
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a2[i] = tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    for(int i=0;i<n;i++){
        cout << lower_bound(a.begin(),a.end(),a2[i]) - a.begin()<<endl;
    }
    return 0;
}