#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> in(5,0);
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s[0] == 'M'){
            
            in[0]++;
        }

        if(s[0] == 'A'){

            in[1]++;
        }

        if(s[0] == 'R'){

            in[2]++;
        }

        if(s[0] == 'C'){
            in[3]++;
        }

        if(s[0] == 'H'){
            in[4]++;
        }
    }
    sort(in.begin(),in.end());
    /*for(int i=0;i<5;i++){
        cout <<in[i] <<endl;
    }*/
    long long ans = 0;
    if(in[0]!=0){
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                for(int k=j+1;k<5;k++){
                    ans += in[i]*in[j]*in[k];
                }
            }
        }
    }
    else if(in[0]==0){
        ans += in[1]*in[2]*in[3] + in[1]*in[2]*in[4] +in[1]*in[3]*in[4]+in[2]*in[3]*in[4]; 
    }
    else if(in[1] == 0){
        ans += in[2]*in[3]*in[4];
    }
    cout << ans << endl;
    return 0;

}