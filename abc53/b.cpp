#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans = 0;
    int a=10000000;
    int z=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'&&a > i){
            a = i;
        }
        else if(s[i] == 'Z'&&z<i){
            z = i;
        }
    }
    ans = z-a+1;
    cout << ans << endl;
    return 0;
}