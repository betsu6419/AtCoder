#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    char d[k];
    for(int i=0;i<k;i++){
        cin >> d[i];
    }
    int tmp = n;
    while(1){
        string s = to_string(tmp);
        bool sw = true;
        for(int i = 0;i < s.size();i++){
            for(int j=0;j<k;j++){
                if(s[i] == d[j]){
                    sw = false;
                }
            }
        }
        if(sw){
            cout << tmp << endl;
            return 0;
        }
        else{
            tmp ++;
        }
    }
}