#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector <bool> in(26,false);
    for(int i=0;i<s.size();i++){
        in[s[i]-'a'] = true;
    }
    for(int i=0;i<in.size();i++){
        if(!in[i]){
            printf("%c\n",'a'+i);
            return 0;
        }
        if(i==in.size()-1){
            cout << "None"<<endl;
            return 0;
        }
    }
}