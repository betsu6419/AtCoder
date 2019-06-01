#include <iostream>
using namespace std;
int n;
int m;
int l[1000000];
int r[1000000];
int inf=1000000;
int sup=0;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> l[i] >> r[i];
    }
    for(int i=0;i<m;i++){
        if(inf > r[i]){
            inf = r[i];
        }
        if(sup < l[i]){
            sup = l[i];
        }
    }
    int ans = inf - sup;
    if(ans < 0){
        ans = 0;
    }
    else{
        ans += 1;
    }
    cout << ans << endl;
}