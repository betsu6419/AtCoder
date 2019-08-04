#include <iostream>
#include<string>
using namespace std;
string s;
int ans[1000000];
int main(){
    cin >> s;
    int l = s.size();
    int left = 0;
    int a = 0;
    int b = 0;
    int right = 0;
    bool on_R = true;
    for(int i=0;i<l;i++){
        ans[i] = 0;
    }
    for(int i=0;i<l;i++){
        if(on_R){
            if(s[i+1] == 'L'){
                a = i;
                b = i+1;
                on_R = false;
            }
        }
        else{
            if(i == (l-1)||s[i+1] == 'R'){
                ans[a] = (i-b+1)/2 + (a-left+2)/2;
                ans[b] = (i-b+2)/2+(a-left+1)/2;
                left = i+1;
                on_R = true;
            }
        }
    }

    for(int i=0;i<(l-1);i++){
        cout << ans[i] << " ";
    }
    cout << ans[l-1] << endl;
    return 0;
}