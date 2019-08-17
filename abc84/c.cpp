#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int c[n-1],s[n-1],f[n-1];
    for(int i=0;i<n-1;i++){
        cin >> c[i] >> s[i] >> f[i];
    }
    for(int j=0;j<n;j++){
        long long t = 0;
        for(int i=j;i<n-1;i++){
           // cout << t <<endl;
            if(t<=s[i]){
                t += s[i]-t;
            }
            else{
                if((t-s[i])%f[i] !=0){
                    t += f[i]-(t-s[i])%f[i];
                }
                 
            }
            t += c[i];
        } 
        cout << t << endl;  
    }
    return 0;
}