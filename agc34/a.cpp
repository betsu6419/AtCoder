#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;
    string s;cin >> s;
    bool ans = true;
    bool ans1 = true;
    bool ans2 = true;
    bool ans3 = false;

    bool rock = false;
    for(int i=min(a-1,c-1);i <= max(c-1,a-1);i++){
        if(rock){
            if(s[i] == '#'){
                ans1 = false;
                rock = true;
            }
            else{
                rock = false;
            }
        }
        else{
            if(s[i] == '#'){
                rock = true;
            }
            else{
                rock = false;
            }
        }
    }


    rock = false;
    for(int i=min(b-1,d-1);i <= max(d-1,b-1);i++){
        if(rock){
            if(s[i] == '#'){
                ans2 = false;
                rock = true;
            }
            else{
                rock = false;
            }
        }
        else{
            if(s[i] == '#'){
                rock = true;
            }
            else{
                rock = false;
            }
        }
    }
    
    int count = 0;
    if(c < d){
        ans3 = true;
    }
    else{
        for(int i = b-2;i <= min(c-1,d-1)+1;i++){
            if(s[i] == '.'){
                count ++;
                if(count == 3){
                    ans3 = true;
                }
            }
            else{
                count = 0;
            }
        }
    }

    if(ans1 && ans2 && ans3){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}