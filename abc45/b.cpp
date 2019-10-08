#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> in(3);
    cin >> in[0] >> in[1] >> in[2];
    int turn = 0;
    while(1){
        if(in[turn].empty()){
            cout << char('A'+turn) << endl;
            return 0;
        }
        int tmp = turn;
        turn = (in[turn][0]-'a');
        in[tmp].erase(in[tmp].begin());
    }
    return 0;
}