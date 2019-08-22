#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string in;
    cin >> in;
    string out;
    for(int i=0;i<in.size();i++){
        if(in[i] == '0'){
            out.push_back('0');
        }
        else if(in[i] == '1'){
            out.push_back('1');
        }
        else{
            if(!out.empty()){
                out.pop_back();
            }
        }
    }
    cout << out << endl;
    return 0;
}