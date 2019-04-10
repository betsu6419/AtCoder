#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n =s.size();
    vector<string> num; 
    for(int i =0;i<n;i++){
        num.push_back(s.substr(i,1));
    }

    long ans = 0;
    for(int i=0;i< (1<<(n-1));i++){
        long sum_tmp = 0;
        string baf = "";
        baf += num[0];
        for(int k=0;k<n-1;k++){
            if(i&(1<<k)){
                ans += stol(baf);
                baf = "";
            }
            baf += num[k+1];
        }
        ans+= stol(baf);
    }
    cout << ans << endl;
}