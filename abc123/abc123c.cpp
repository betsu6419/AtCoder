#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
    long n;
    vector<long> in(5,0);
    cin>>n;
    int i,j;
    for(i=0;i<5;i++){
        cin >> in[i];
    }
    cout << (n-1)/(*min_element(in.begin(),in.end())) + 1+4<< endl;
    return 0;
}