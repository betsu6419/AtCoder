#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 0 << endl;
        return 0;
    }
    vector<int> ans;
    int i = (-2);
    //cout << (-9)%(-2) << endl;
    while(n !=0){
        //cout << n << endl;
        if(abs(n)%2 ==1){
            ans.push_back(1);
            n = (n-1)/i;
        }
        else if(n%2 ==0){
            ans.push_back(0);
            n = n/i;
        }
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    cout << endl;
    return 0;
}