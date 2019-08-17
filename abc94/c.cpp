#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> a,b;
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        a.push_back(tmp);
        b.push_back(tmp);
    }
    sort(b.begin(),b.end());
    int left = b[n/2-1];
    int right = b[n/2];
    for(int i=0;i<n;i++){
        if(a[i] <=left){
            cout << right << endl;
        }
        else if(right <= a[i]){
            cout << left << endl;
        }
    }
    return 0;
}