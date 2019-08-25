#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int in[5];
    for(int i=0;i<5;i++){
        cin >> in[i] ;
    }
    vector<int> v;
    for(int i=0;i<=2;i++){
        for(int j=i+1;j<=3;j++){
            for(int k=j+1;k<=4;k++){
                v.push_back(in[i] + in[j] + in[k]);
            }
        }
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout << v[2] << endl;
    return 0;
}