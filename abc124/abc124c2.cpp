#include<iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int ans1=0,ans2=0;
    bool flag = false;
    for(int i=0;i<s.size();i++){
        if(flag){
            if(s.substr(i,1) == "1"){
                ans1 ++;
            }
        }
        else{
            if(s.substr(i,1) == "0"){
                ans1 ++;
            }
        }
        if(flag){
            flag = false;
        }
        else{
            flag = true;
        }
    }

    flag = false;
    for(int i=0;i<s.size();i++){
        if(flag){
            if(s.substr(i,1) == "0"){
                ans2 ++;
            }
        }
        else{
            if(s.substr(i,1) == "1"){
                ans2 ++;
            }
        }
        
        if(flag){
            flag = false;
        }
        else{
            flag = true;
        }
    }
    cout << min(ans1,ans2) << endl;
}