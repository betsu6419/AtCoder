#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int > a;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    int al=0;
    int bob=0;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(i%2==0){
            al += a[i];
        }
        else{
            bob += a[i];
        }
    }
    cout << al-bob << endl;
    return 0;
 }