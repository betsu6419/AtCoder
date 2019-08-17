#include<iostream>
#include<string>
using namespace std;
int main(){
    string a,b;
    cin >> a >> b;
    bool ans = false;
    if(a.size() != b.size()){
        ans = a.size()>b.size();
    }
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                ans = a[i] > b[i];
                break;
            }
            if(i==a.size()-1){
                cout << "EQUAL" << endl;
                return 0;
            }
        }
    }
    if(ans){
        cout << "GREATER" << endl;
    }
    else{
        cout << "LESS" << endl;
    }
    return 0;
}