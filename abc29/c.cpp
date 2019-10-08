#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void f(int rest,string s){
    if(rest == 0){
        cout << s << endl;
    }
    else{
        f(rest-1,s+"a");
        f(rest-1,s+"b");
        f(rest-1,s+"c");
    }
}

int main(){
    int n;
    cin >> n;
    f(n,"");
    return 0;
}