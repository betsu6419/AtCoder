#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    vector <string> day = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    cin >> s;
    vector<string>::iterator it = find(day.begin(),day.end(),s);
    int ans = 7-(it-day.begin());
    cout << ans<< endl;
    return 0;

}