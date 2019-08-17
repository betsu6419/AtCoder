#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector <string> blue;
    for(int i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        blue.push_back(tmp);
    }

    cin >> m;
    vector<string>red;
    for(int i=0;i<m;i++){
        string tmp;
        cin >> tmp;
        red.push_back(tmp);
    }
    int ans = 0;

    for(int i=0;i<blue.size();i++){
        int tmp = 0;
        for(int j=0;j<blue.size();j++){
            if(blue[i] == blue[j]){
                tmp ++;
            }
        }
        for(int j=0;j<red.size();j++){
            if(blue[i] == red[j]){
                tmp --;
            }
        }
        if(tmp > ans){
            ans = tmp;
        }
    }
    cout << ans << endl;
    return 0;
}