#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector <int> in;
    for(int i=0;i<m;i++){
        int tmp;
        cin >> tmp;
        in.push_back(tmp);
    }
    sort(in.begin(),in.end());
    int area = in[m-1] - in[0];
    vector <int> sub;
    for(int i=0;i<m-1;i++){
        sub.push_back(in[i+1]-in[i]);
    }
    sort(sub.begin(),sub.end());
    reverse(sub.begin(),sub.end());
    for(int i=0;i<min(n-1,m-1);i++){
        area -= sub[i];
    }
    cout << area << endl;
    return 0;
}