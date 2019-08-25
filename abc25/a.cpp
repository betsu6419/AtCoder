#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string s;
vector<string> v;
void f(string t){
    if(t.size() == 2){
        v.push_back(t);
    }
    else{
        f(t+s[0]);
        f(t+s[1]);
        f(t+s[2]);
        f(t+s[3]);
        f(t+s[4]);
    }
}

int main(){
    cin >> s;
    f("");
    sort(v.begin(),v.end());
    int n ;cin >> n;
    cout << v[n-1] << endl;
    return 0;
}