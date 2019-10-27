#include <iostream>
#include<string>
using namespace std;

int main(){
    int n;

    cin >> n;
    int in[n];
    for(int i=0;i<n;i++){
        cin >> in[i];
    }
    int ans = 0;
    int tmp = 0;
    for(int i=0;i<n;i++){
        if(in[i] == i+1){
            tmp ++;
        }
        else{
            ans += (tmp+1)/2;
            tmp = 0;
        }
    }
    ans += (tmp+1)/2;
    cout << ans << endl;
    return 0;
}