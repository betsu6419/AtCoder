#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    int i=0;
    bool sw = true;
    while(i < s.size()){
        if(s.size()-i < 5){
            sw = false;
            break;
        }
        string t = s.substr(i,5);
        if(t == "maerd"){
            i += 5;
        }
        else if(t == "esare"){
            i += 5;
        }
        else if(s.size()-i >=6){
            string u = s.substr(i,6);
            if(u == "resare"){
                i += 6;
            }
            else if(s.size()-i >=7){
                string r = s.substr(i,7);
                if(r == "remaerd"){
                    i += 7;
                }
                else{
                    sw = false;
                    break;
                }
            }
            else{
                sw = false;
                break;
            }
        }
        else{
            sw = false;
            break;
        }
    }
    if(sw){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}