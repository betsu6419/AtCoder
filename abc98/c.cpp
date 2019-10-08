#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int leftwest[n];
    int righteast[n+1];
    leftwest[0] = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == 'W'){
            leftwest[i+1] = leftwest[i]+1;
        }
        else{
            leftwest[i+1] = leftwest[i];
        }
    }
    righteast[n-1] = 0;
    for(int i=n-1;i>0;i--){
        if(s[i] == 'E'){
            righteast[i-1] = righteast[i]+1;
        }
        else{
            righteast[i-1] = righteast[i];
        }
    }
/*
    for(int i=0;i<n;i++){
        cout << leftwest[i];
    }
    cout << endl;
    for(int i=0;i<n;i++){
        cout << righteast[i];
    }
    cout << endl;
*/
    int ans=1000000000;
    for(int i=0;i<n;i++){   
        int tmp = leftwest[i]+righteast[i];
        if(ans > tmp){
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}