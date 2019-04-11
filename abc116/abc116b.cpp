#include <iostream>
#include <vector>

using namespace std;

int main(){
    int s;
    int max = 1000000;
    vector<int> a(max);
    vector<bool> b(max,false);
    cin >> s;
    a.at(0) = s;
    int i = 0;
    b.at(s) = true;
    while(1){
        if(a.at(i)%2==0){
            a.at(i+1) = a.at(i)/2;
        }
        else if(a.at(i)%2 ==1){
            a.at(i+1) = 3*a.at(i)+1;
        }
        if(b.at(a.at(i+1))==true){
            cout << (i+2);
            return 0;
        }
        else{
            b.at(a.at(i+1)) = true;
            i ++;
        }
    }
}