#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int> a(3);
    for(int i=0;i<3;i++){
        cin >> a[i];
    }
    for(int i=0;i<3;i++){
         if(a[i] == n){
            cout << "NO" << endl;
            return 0;
        }
    }

    sort(a.begin(),a.end());
    if(n > a[2]){
        if(a[0] == a[1]-1 && a[1] == a[2]-1){
            cout << "NO" << endl;
                return 0;   
        }
    }
    int tmp = n;
    int count = 0;
    while(tmp >0){
        for(int i=0;i<3;i++){
            if(tmp == a[i]){
                tmp ++;
            }
        }
        tmp -= 3;
        count ++;
    }
    if(count <= 100){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}