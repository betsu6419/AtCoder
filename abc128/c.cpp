#include <iostream>
#include<cmath>
using namespace std;
int s[10];
int p[10];
int main(){
    int n,m;
    cin >> n>>m;
    for(int i=0;i<m;i++){
        int k ;
        cin >> k;
        for(int j=0;j<k;j++){
            int s_i;
            cin >> s_i;
            s[i] += pow(2,s_i-1);
        }
        //cout << s[i] << endl;
    }
    for(int i=0;i<m;i++){
        cin >> p[i];
    }
    int ans = 0;
    for(int i=0;i<pow(2,n);i++){
        int flag = 0;
        for(int k=0;k<m;k++){
            int sum = 0;
            for(int j=0;j<n;j++){
                if((i&s[k])&(1<<j)){
                    sum ++;
                }
            }
            if(sum%2 == p[k]){
                flag ++;
            }  
        }
        if(flag == m){
            ans ++;
        }
    }
    cout <<ans << endl;
    return 0;
}