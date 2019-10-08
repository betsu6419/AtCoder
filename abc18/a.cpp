#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(3);
    int a,b,c;
    cin >> a >> b >> c;
    v[0] = a;v[1] = b;v[2] = c;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<3;i++){
        if(v[i] == a){
            cout << i+1 << endl;
        }
    }

    for(int i=0;i<3;i++){
        if(v[i] == b){
            cout << i+1 << endl;
        }
    }

    for(int i=0;i<3;i++){
        if(v[i] == c){
            cout << i+1 << endl;
        }
    }
    return 0;
}