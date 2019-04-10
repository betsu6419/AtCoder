#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> in;
    for(int i=0;i<s.size();i++){
        in.push_back(s.substr(i,1));
    }
    for(int i=0;i<8;i++){
        int sum = 0;
        string buf  = "";
        buf += in[0];
        sum += stoi(in[0]);
        for(int k=0;k<3;k++){
            if(i&(1<<k)){
                buf += '-';
                buf += in[k+1];
                sum -= stoi(in[k+1]);
            }
            else{
                buf += '+';
                buf += in[k+1];
                sum += stoi(in[k+1]);
            }
        }
        if(sum == 7){
            buf += "=7";
            cout << buf << endl;
            return 0;
        }
    }
}