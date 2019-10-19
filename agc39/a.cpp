#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int k;cin >> k;
    int tmp = 1;
    int tans= 0;
    int begin = 0;
    int end = 0;
    long long ans = 0;
    if(s.size() == 1){
        cout << k/2 << endl;
        return 0;
    }
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            tmp ++;
        }
        else{
            if(begin == 0){
                begin = tmp;
            }
            else{
                tans += tmp/2;
            }
            tmp = 1;
        }
    }
    end = tmp;
    if(end == s.size()){
        cout << ((long long)s.size()*(long long)k) / (long long )2 << endl;
        return 0;
    }
    int tans2 =0;
    if(s[0] == s[s.size()-1]){
        tans2 += (begin +end)/2;
        ans = (long long)begin/(long long)2 +(long long)tans*(long long)k +  (long long)tans2*(long long)(k-1) + (long long)end/(long long)2;
    }
    else{
        tans += (begin)/2 + end/2;
        ans = (long long)tans*(long long)k;
    }

    cout << ans<< endl;
    return 0;


}

