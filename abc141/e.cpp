#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n;cin >> n;
    string s;cin >> s;
    vector<string> suffix;
    for(int i=0;i<s.size();i++){
        suffix.push_back(s.substr(i,s.size()-i));
    }
    int tmpma = 1;
    int count = 1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]){
            count ++;
        }
        else{
            if(tmpma < count){
                tmpma = count;
            } 
            count = 1;
        }
    }
    if(tmpma < count){
        tmpma = count;
    } 
    sort(suffix.begin(),suffix.end());
    int ma = tmpma/2;
    int pre_j = 0;
    int pre_loc = 0;
    for(int i=0;i<suffix.size()-1;i++){
        int j=0;
        while(suffix[i][j] == suffix[i+1][j]){
            j ++;
            if(j == suffix[i].size() || j == suffix[i+1].size()){
                break;
            }
        }
        int loc1 = s.size()-suffix[i].size();
        int loc2 = s.size()-suffix[i+1].size();
        if(j >= ma && (max(loc1,loc2)-min(loc1,loc2) >= j)){
            ma = j;
        }
        if(pre_j <= j){
            if(pre_j >= ma && pre_loc-min(loc1,loc2) >= pre_j){
                ma = pre_j;
            }
        }
        pre_j = j;
        pre_loc =loc1;
    }
    cout << ma << endl;
    return 0;
}