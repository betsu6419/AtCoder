#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans;
    int i = (-2);
    if(n>0){
        while(n>0){
            int bit = n%i;
            ans.push_back(bit);
            n = (n-bit)/2;
        }
    }
}