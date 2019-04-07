#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector <int> in(5,0);
    int k,i,j;

    for(i =0;i<5;i++){
        cin >> in.at(i);
    }
    cin >> k;
    bool ans = false;
    for(i = 0;i<5;i++){
        for(j = 0;j<i;j++){
            if(abs(in[i] - in[j]) >k ){
                ans = true;
            }
        }
    }
    if(ans){
        cout << ":(" << endl;
    }
    else{
        cout << "Yay!" << endl;
    }
}