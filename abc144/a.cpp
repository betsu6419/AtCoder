#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<utility>
#include<tuple>
#include<cmath>

using namespace std;
typedef long long ll;

int main(){
    int a,b;cin >> a >> b;
    if(a <= 9 && b <= 9){
        cout << a*b << endl;
    }
    else{
        cout << -1 << endl;
    }
    return 0;
}