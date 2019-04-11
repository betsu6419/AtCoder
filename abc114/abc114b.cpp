#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string s;
    int n = s.size();
    int nums,min = 1000;
    string buf;
    for(int i =0;i<n-2;i++){
        buf.push_back(substr(i,3));
        int nums = stoi(buf);
        int subs = abs(nums-753);
        if(subs<min){
            min = subs;
        }
    }
    cout << min << endl;
}