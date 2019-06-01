#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
using namespace std;
int n;

int main(){
    cin >> n;
    pair<pair<string,int>,int> p[n];
    for(int i=0;i<n;i++){
        string s;
        int t;
        cin >> s;
        cin >> t;
        p[i] = make_pair(make_pair(s,-t),i+1);
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        cout << p[i].second<<endl;
    }

}