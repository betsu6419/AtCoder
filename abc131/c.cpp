#include <iostream>
using namespace std;
typedef long long LL;
LL  a,b,c,d;
LL solve(LL a,LL b,LL subject){
    if(a == 1){
        return b/subject;
    }
    else{
        return b/subject - (a-1)/subject;
    }
}
LL LCM(LL e,LL f){
    LL tmp=1;
    LL g,h;
    if(f>e){
        g = f;
        h = e;
    }
    else{
        g = e;
        h = f;
    }
    while(tmp != 0){
        tmp = g%h;
        g = h;
        h = tmp;
    }
    /*cout << g << endl;
    cout << e/g << endl;
    cout << f/g << endl;
    */
    return (e/g)*f;
}

int main(){
    cin >> a >> b >>c >> d;
    LL  i_c = solve(a,b,c);
    LL i_d = solve(a,b,d);
    LL cd = LCM(c,d);
    LL i_cd = solve(a,b,cd);
    LL ans = (b-a+1) - i_c - i_d + i_cd;
    cout << ans << endl;
    return 0;
}