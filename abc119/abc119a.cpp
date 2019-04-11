#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string in;
    cin >> in;
    vector<string> s;
    int year = stoi(in.substr(0,4));
    int month = stoi(in.substr(5,2));
    int day = stoi(in.substr(8,2));
    bool hei = true;
    if(year > 2020){
        hei = false;
    }
    else if(year == 2019 && month > 4){
        hei = false;
    }
    if(hei){
        cout<< "Heisei"<<endl;
    }
    else{
        cout << "TBD" << endl;
    }
    return 0;
}