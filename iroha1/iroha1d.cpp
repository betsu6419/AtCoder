#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
int x;
int y;
int main(){
    cin >> n >> x >> y;

vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            x += a[i];
        }
        else{
            y += a[i];
        }
    }
    if(x>y){
        cout << "Takahashi" << endl;
    }
    else if(x<y){
        cout << "Aoki" << endl;
    }
    else{
        cout << "Draw" << endl;
    }
    return 0;
}