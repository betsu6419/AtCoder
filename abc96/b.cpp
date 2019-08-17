#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int k;
    vector<int> in(3);
    cin >> in[0] >> in[1] >>in[2] >>k;
    sort(in.begin(),in.end());
    cout << in[2]*pow(2,k)+in[1]+ in[0]<<endl;
    return 0;
}