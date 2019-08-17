#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;
    int nums[26];
    int numt[26];
    for(int i=0;i<26;i++){
        nums[i] = 0;
        numt[i] = 0;
    }
    int is = '1',it='1';
    for(int i=0;i<s.size();i++){
        if(nums[s[i]-'a'] == 0){
            nums[s[i]-'a'] = is;
            s[i] = is;
            is++;
        }
        else{
            s[i] = nums[s[i]-'a'];
        }


        if(numt[t[i]-'a'] == 0){
            numt[t[i]-'a'] = it;
            t[i] = it;
            it++;
        }
        else{
            t[i] = numt[t[i]-'a'];
        }
    }

    /*cout << s << endl;
    cout << t << endl;*/
    for(int i=0;i<s.size();i++){
        if(s[i] != t[i]){
            cout << "No" << endl;
            break;
        }
        if(i == s.size()-1){
            cout << "Yes" << endl;
        }
    }
    return 0;
}