#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        int tmp;
        cin >>tmp;
        while(tmp%2 ==0){
            tmp /=2;
        }
        a[i] = tmp;
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    //cout << a.size() << endl;
   
    cout << a.size() << endl;
    return 0;
}