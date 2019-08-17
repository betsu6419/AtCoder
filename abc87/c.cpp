#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    int left[n+1];
    int right[n+1];
    left[0] = 0;
    right[n] = 0;
    for(int i=0;i<n;i++){
        left[i+1] = left[i] + a[i];
        right[n-i-1] = right[n-i] + b[n-i-1];
    }
/*
    for(int i=0;i<n;i++){
        cout << left[i] << " ";
    }
    cout << endl;
    
    for(int i=0;i<n;i++){
        cout << right[i] << " ";
    }
    cout << endl;
  */  int ans = 0; 
    for(int i=0;i<n;i++){
        if(ans < left[i+1] +right[i] ){
            ans = left[i+1] + right[i];
        }
    }
    cout << ans << endl;
    return 0;
}