#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,max = 0,ansi = -1;
    cin >> n;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin >> p[i];
        if(p[i] > max){
            max = p[i];
            ansi = i;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==ansi){
            ans += p[i]/2;
        }
        else{
            ans += p[i];
        }
    }
    cout << ans << endl;

}