#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin >> n;
    ll depth=0;
    ll tmp = n;
    while(tmp >1){
        tmp /=2;
        depth ++;
    }
    bool a = true;
    tmp = 1;
    if(depth %2 == 0){
        while(1){
            if(a){
                tmp =tmp*2+1;
            }
            else{
                tmp *=2;
            }
            //cout << tmp << endl;
            if(n<tmp){
                if(a){
                    cout << "Aoki" << endl;
                }
                else{
                    cout << "Takahashi"<<endl;
                }
                return 0;
            }
            a = !a;
        }
    }
    else{
        while(1){
            if(a){
                tmp *= 2;
            }
            else{
                tmp = tmp*2+1;
            }

            //cout << tmp << endl;
            if(n<tmp){
                if(a){
                    cout << "Aoki" << endl;
                }
                else{
                    cout << "Takahashi" << endl;
                }
                return 0;
            }
            a=!a;
        }
    }
}