#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n,T;
    cin >> n >> T;
    vector<int> c(n);
    vector <int > t(n);
    for(int i=0;i<n;i++){
        cin >> c[i];
        cin >>  t[i];
    }
    int min = 10000;
    for(int i=0;i<n;i++){
        if(t[i]<= T){
            if(min>c[i]){
                min = c[i];
            }
        }
    }
    if(min == 10000){
        cout << "TLE" << endl;
        return 0;
    }
    cout << min << endl;
    return 0;
}