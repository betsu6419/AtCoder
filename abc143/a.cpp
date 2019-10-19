#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;

int main(){
    int a,b;cin >> a >> b;
    cout << max(0,a-2*b) << endl;
    return 0;
}   