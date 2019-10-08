#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> s(n);
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> s[i];
        sum += s[i];
    }
    sort(s.begin(),s.end());
    if(sum%10 != 0){
        cout << sum << endl;
    }
    else{
        for(int i=0;i<n;i++){
            if(s[i]%10 !=0){
                cout << sum-s[i] << endl;
                return 0;
            }
            else if(i == n-1){
                cout << '0' << endl;
            }
        }
    }
    return 0;
}