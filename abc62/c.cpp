#include<iostream>
#include<vector>
#include<algorithm>
typedef long long ll;
using namespace std;

int main(){
    ll h,w;
    cin >> h >> w;
    ll ans = 1000000000;
    for(int i=1;i<w;i++){
        ll s_1 = i*h;
        ll s_2 = (w-i)*(h/2);
        ll s_3 = (w-i)*(h-h/2);
        ll diff = max(s_1,max(s_2,s_3))-min(s_1,min(s_2,s_3));
        if(diff<ans){
            ans = diff;
           
        }
        if((w-i)>=2){
        s_2 = ((w-i)/2)*h;
        s_3 = (w-(w-i)/2-i)*h;
        diff = max(s_1,max(s_2,s_3))-min(s_1,min(s_2,s_3));
        if(diff<ans){
            ans = diff;
        }
        }
    }


        ll tmp = h;
        h  =w;
        w = tmp;
    for(int i=1;i<w;i++){
        ll s_1 = i*h;
        ll s_2 = (w-i)*(h/2);
        ll s_3 = (w-i)*(h-h/2);
        ll diff = max(s_1,max(s_2,s_3))-min(s_1,min(s_2,s_3));
        if(diff<ans){
            ans = diff;
        }
        if((w-i)>=2){
        s_2 = ((w-i)/2)*h;
        s_3 = (w-(w-i)/2-i)*h;
        diff = max(s_1,max(s_2,s_3))-min(s_1,min(s_2,s_3));
        if(diff<ans){
            ans = diff;
        }
        }
    }
    cout << ans << endl;
    return 0;
}