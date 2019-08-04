#include <iostream>
using namespace std;
int n;
int h[100000];
int main(){
    cin >> n;
    bool ans = true;
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    if(n==1){
        ans = true;
    }
    for(int i=(n-1);i>0;i--){
        if(h[i-1] >h[i]){
            if(h[i-1] == 0){
                ans = false;
            }
            else{
                h[i-1] = h[i-1]-1;
                if(h[i-1] > h[i]){
                ans = false;
            }
            }
            
        }
    }
    if(ans){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}