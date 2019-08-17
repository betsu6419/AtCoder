#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        if(i%2 == 0){
            odd.push_back(tmp);
        }
        else{
            even.push_back(tmp);
        }
    }
    if(n%2 == 0){
        reverse(even.begin(),even.end());
        even.insert(even.end(),odd.begin(),odd.end());
        for(int i=0;i<even.size();i++){
            cout << even[i] << " ";
        }
        cout << endl;
        return 0;
    }
    else{
        reverse(odd.begin(),odd.end());
        odd.insert(odd.end(),even.begin(),even.end());
        for(int i=0;i<odd.size();i++){
            cout << odd[i] << " ";
        }
        cout << endl;
        return 0;
    }
}