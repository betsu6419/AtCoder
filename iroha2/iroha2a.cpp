#include <iostream>
#include <string>
using namespace std;
string s;
string t;
int ans=0;
int last_j=0;
int memo[6000][6000];
int dp(int I,int J){
    cout << "I=" <<I << " J=" << J << endl; 
    if(I == s.size()){
        return 0;
    }
    
}

int main(){
    cin >> s;
    cin >> t;
    ans = dp(0,0)+1;
    cout << ans << endl;
}