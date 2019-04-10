#include<iostream>
#include<vector>
using namespace std;

int main (){
    int d;
    long g;
    cin >> d>>g;
    vector<int> p(d);
    vector<int> c(d);
    for(int i=0;i<d;i++){
        cin >> p[i] >> c[i];
    }
    int ans = 3000;
    for(int i=0;i<(1<<d);i++){
        long sum = 0;
        int tans = 0;
        int first0 = -1;
        bool flag = false;
        for(int k =(d-1);k>-1;k--){
            if(i&(1<<k)){
                sum += p[k]*(k+1)*100 + c[k];
                tans += p[k];
            }
            else if(flag == false){
                first0 = k;
                flag = true;
            }
        }
        if(sum >= g){
            if(ans > tans){
                ans = tans;
            }
        }
        else if(first0 != -1){
            for(int k=0;k<p[first0];k++){
                sum += 100*(first0 + 1);
                tans += 1;
                if(sum >= g){
                    if(ans > tans){
                        ans = tans;
                    }
                }
            }
        }
    }
    cout << ans << endl;
}