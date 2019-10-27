#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;cin >> n;
    string s;cin >> s;
    int left=0;
    int right = 0;
    int countl = 0;
    int countr = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '('){
            right ++;
        }
        else{
            if(right>0){
                right --;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[n-1-i] == ')'){
            left ++;
        }
        else{
            if(left >0){
                left --;
            }
        }
    }
    for(int i=0;i<left;i++){
        s = '(' + s;
    }
    for(int i=0;i<right;i++){
        s = s + ')';
    }
    cout << s << endl;
    return 0;
}   