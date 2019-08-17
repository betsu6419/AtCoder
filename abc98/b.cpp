#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n ;
    string s;
    cin >> s;
    int ans=0;
    vector<int> left(26,0);
    vector<int> right(26,0);
    for(int i=0;i<n-1;i++){
        int tmp=0;
        for(int j=0;j<26;j++){
            left[j] = 0;
            right[j] = 0;
        }

        for(int j=0;j<=i;j++){
            left[s[j]-'a']++;
        }
        for(int j=i+1;j<n;j++){
            right[s[j]-'a']++;
        }

        for(int j=0;j<26;j++){
        if(left[j] >0 && right[j] > 0){
            tmp ++;
        }
    }
        if(tmp > ans){
            ans = tmp;
        }
    }

    
    cout << ans <<endl;
    return 0;
}