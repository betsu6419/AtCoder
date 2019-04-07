#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    int list[n];
    list[0] = 0;
    int i,ans = 0;
    bool a = false;
    for(i = 0;i < n ;i++){
        if(s.at(i) == 'A'){
              a = true;
              list[i+1] = list[i];
        }
        else if(s.at(i) == 'C' && a == true){              
            list[i+1] = list[i] + 1;
            a = false;
            }
        else{
            a = false;
            list[i+1] = list[i];
        }
    }
    for(i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        int ans = list[r] - list[l];
        cout << ans << endl;
    }
}