#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string t = "WBWBWWBWBWBW";
    string ans[12] = {"Do","Do","Re","Re","Mi","Fa","Fa","So","So","La","La","Si"};
    //cout << ans[0] << endl;
    for(int i=0;i<12;i++){
        //cout << t << endl;
        rotate(t.begin(),t.begin()+1,t.end());
        string r = t+t.substr(0,8);
        if(s == r){
            //cout <<"A" << endl;
            cout << ans[(i+1)%12] << endl;
            return 0;
        }
    }
    return 0;
}