#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;cin >> n;
    int k;cin >> k;
    string s;cin >>s;
    bool L = false;
    int count_s = 0;
    int count_o = 0;
    if(s[0] == 'L'){
        L  =true;
    }
    for(int i=1;i<s.size();i++){
        if(L){
            if(s[i] == 'L'){
                count_s++;
            }
            else{
                count_o++;
                L = false;
            }
        }
        else{
            if(s[i] == 'R'){
                count_s ++;
            }
            else{
                count_o++;
                L = true;
            }
        }
    }
    int ans = count_s;
    ans+= min(count_o,k*2);
    cout << ans << endl;
    return 0;
}