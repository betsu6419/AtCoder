#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int n;cin >> n;
    vector<int> p(n+1);
    bool sw  =true;
    for(int i=0;i<=n;i++){
        p[i] = 0;
    }
    for(int j=2;j<=n;j++){
        int tmp = j;    
        for(int i=2;i<=n;i++){
            while(tmp%i == 0){
                tmp = tmp/i;
                p[i] ++;
            }
        }
    }
    for(int i=2;i<=n;i++){
      //  cout <<i << " " <<  p[i] << endl;
    }
    int ans = 0;
    for(int i=2;i<=n;i++){
        if(p[i] >= 74){
                ans ++;
            }
        for(int j=2;j<=n;j++){
            if(i != j){
                if(p[i] >= 14 && p[j] >= 4){
                    ans ++;
                }
            }
            if(i != j){
                if(p[i] >= 24 && p[j] >= 2){
                    ans ++;
                }
            }
            
            for(int k=2;k<=n;k++){
                if(i < j && j != k && k != i){
                    if(p[i] >= 4 && p[j] >= 4 && p[k] >= 2){
                        ans ++;
                    }
                }

            }
        }
    }
    cout << ans << endl;
    return 0;
}