#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main(){
    int n,q;cin >> n >> q;
    int a[n];
    memset(a,0,sizeof(a));
    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        a[l-1] ++;
        a[r] --;
    }
    if(a[0]%2==0){
        cout <<0; 
    }
    else{
        cout << 1;
    }
    for(int i=1;i<n;i++){
        a[i] = a[i] + a[i-1];
        if(a[i] %2 == 0){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    cout << endl;
    return 0;
    
}