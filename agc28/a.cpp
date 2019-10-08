#include<string>
#include<iostream>
using namespace std;

int main(){
    int n,m;cin >> n >> m;
    string s;cin >> s;string t;cin >> t;
    if(n<m){
        int tmp = n;
        n = m;m = n;
        string r = s;
        s = t;t = r;
    }
    int a = n,b = m,e=0;
    while(b !=0){
        e = a%b;
        a = b;
        b = e;
    }
    int c = n/a,d = m/a;
    a = a*c*d;
    for(int i=0;i<t.size();i++){
        if(i*n % a == 0){
            if(s[(i*n)/m] != t[i]){
                cout << "-1" << endl;
                return 0;
            }
        }
    }
    cout << n*m << endl;
    return 0;
}   