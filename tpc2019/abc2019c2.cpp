#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    char in[n];cin >> in;
    int ans = 0;
    int tans1 = 0;int tans2 = 0;
    bool count = false;
    for(int i=0;i<n;i++){
        if(in[i] == '#'){
            count = true;
        }
        if(count && (in[i] =='.') ){
            tans1 ++;
        }
    }
    count = false;
    for(int i = 0;i<n;i++){
        if(in[n-i-1] == '.'){
            count = true;
        }
        if(count && (in[n-i-1] == '#')){
            tans2 ++;
        }
    }
    ans = min(tans1,tans2);
    cout << ans << endl;
    return 0;
}
