#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    vector <int>a;
    cin >> n;
    for(int i=0;i<n;i++){
        int in;
        cin >> in;
        a.push_back(in);
    }
    while(a.size()!=1){
        sort(a.begin(),a.end());
        while(a[0]== 0){
            a.erase(a.begin());
        }
        for(int i=1;i<a.size();i++){
            a[i] = a[i]%a[0];
        }
    }
    cout << a[0] << endl;
    return 0;
}