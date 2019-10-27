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
    int n;cin >> n;
    bool ans = false;
    for(int i=1;i<=9;i++){
        if(n%i == 0){
            int j=n/i;
            if(j/10 == 0){
                ans = true;
            }
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}