#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
    cin >> s;
    bool a,b;
    if((s[0] == '0'&&s[1]!='0')||(s[0]=='1'&&(s[1] == '1'||s[1] == '2'))){
        a = true;
    }
    else{
        a = false;
    }

    if((s[2] == '0'&&s[3]!='0')||(s[2]=='1'&&(s[3] == '1'||s[3] == '2'))){
        b = true;
    }
    else{
        b = false;
    }
    if(a&&b){
        cout << "AMBIGUOUS"<<endl;
    }
    else if(a&&(!b)){
        cout << "MMYY" << endl;
    }
    else if((!a)&&b){
        cout << "YYMM" << endl;
    }
    else{
        cout << "NA" << endl;
    }
    return 0;
}