#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int tmp = 0;
    int ans = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'I'){
            tmp ++;
            if(ans < tmp){
                ans = tmp;
            }
        }
        else{
            tmp --;
        }
    }
    cout << ans << endl;
    return 0;
}