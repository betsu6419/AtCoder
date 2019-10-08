#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> in(3);
    cin >>in[0] >>in[1] >> in[2];
    sort(in.begin(),in.end());
    in[0] = in[2]- in[0];
    in[1] = in[2]-in[1];
    in[2] = 0;
    int ans = in[1];
    in[0] = in[0]-in[1];
    if(in[0]%2 == 1){
        ans += in[0]/2+2;
    }else{
        ans += in[0]/2;
    }
    cout << ans << endl;
    return 0;
}