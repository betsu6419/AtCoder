#include<iostream>
using namespace std;

int main(){
    int n;cin >> n;
    int a,b;cin >> a >> b;
    int k;cin >> k;
    bool city[n];
    for(int i=0;i<n;i++){
        city[i] = false;
    }
    city[a-1] = true;city[b-1] = true;
    for(int i=0;i<k;i++){
        int p;cin >> p;
        if(city[p-1]){
            cout << "NO" << endl;
            return 0;
        }
        else{
            city[p-1] = true;
        }
    }
    cout << "YES" << endl;
    return 0; 
}