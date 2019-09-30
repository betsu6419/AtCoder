#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;cin >> n;
    int k ;cin >> k;
    int q;cin >> q;
    int a[q];
    int b[n];
    
    for(int i=0;i<n;i++){
        b[i] = 0;
    }
    for(int i=0;i<q;i++){
        cin >> a[i];
        a[i]--;
        b[a[i]]++;
     }
    for(int i=0;i<n;i++){
        if(k-q+b[i] > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}