#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> x(n);
    vector<string> u(n);
    for(int i=0;i<n;i++){
        cin >> x[i];
        cin >> u[i];
    }
    double ans =0;
    for(int i =0;i<n;i++){
        if(u[i] == "JPY"){
            ans += stol(x[i]);
        }
        else if(u[i] == "BTC"){ 
            ans += (stod(x[i])*380000);
        }
        
    }
    cout << ans;
}