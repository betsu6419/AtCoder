#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<string>
#include<utility>
#include<tuple>
#include<cmath>

using namespace std;
typedef long long ll;

int main(){
    double a,b,x;cin >> a >> b >> x;
    double s = x/a;
    double ans;
    double c;
    #if TEST
        cout << s << endl;
    #endif
    if(a*b/(double)2 >s){
        c = (s*(double)2)/(double)b;
        ans = atan((double)b/(double)c);
    }
    else{
        c = 2*(a*b-s)/a;
        ans = atan((double)c/(double)a);
    }
    #if TEST
        cout <<  c << endl;
        cout << ans << endl;
    #endif
    ans =(ans/(double)M_PI)*(double)180;
    printf("%.7f\n",ans);
    return 0; 
}