#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<int> num(3);
    string in;
    cin >> in;
    for(int i=0;i<3;i++){
        num[i] = stoi(in.substr(i,1));
        if(num[i] == 9){
            cout << 1 ;
        }
        else{
            cout << 9;
        }
        
    }
    cout<<endl;

}