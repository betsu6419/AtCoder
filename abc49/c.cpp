#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s;
    cin >> s;
    bool sw = true;
    int i = 0;
    while(i < s.size()){
        if(s.size()-i>=5){
            string t_5 = s.substr(i,5);
            if(t_5 == "dream"){
                if(s.size()-i >= 7){
                    string t_7 = s.substr(i,7);
                    if(t_7 == "dreamer"){
                        if(s.size()-i >= 11){
                             string t_11 = s.substr(i,11);
                             if(t_11 == "dreameraser"){
                                 i +=11;
                             }
                             else{
                                 i += 7;
                             }
                        }
                        else{
                            i += 7;
                        }
                    }
                    else{
                        i += 5;
                    }
                }
                else{
                    i += 5;
                }
            }
            else if(t_5 == "erase"){
                if(s.size()-i >= 6){
                    string t_7 = s.substr(i,6);
                    if(t_7 == "eraser"){
                        i += 6;
                    }
                    else{
                        i += 5;
                    }
                }
                else{
                    i += 5;
                }
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