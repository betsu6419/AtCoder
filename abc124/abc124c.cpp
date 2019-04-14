#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> buf;
    int ans=0;
    int i=0;
    if(s.size() == 1){
        cout << 0 << endl;
        return 0;
    }
    else if(s.size() ==2){
        if(s[0]==s[1]){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return 0;
    }
    else if( s.size() == 3){
        if((s[0] == s[1])&&(s[1] == s[2])){
            cout << 1 << endl;
        }
        else if(s[0]==s[1] || s[1] == s[2]){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        return 0;
    }
    while(i <s.size()){
        //cout << i << endl;
        buf.push_back(s.substr(i,1));
        if((buf.size() == 3)&& (buf[0] == buf[1])&&(buf[1] != buf[2])&& (i == 2)){
            if(s[0] == '1'){
                buf[0] = '0';
                s[0] = '0';
            }
            else{
                buf[0] = '1';
                s[0] = '1';
            }
            ans ++;
            i ++;
        }
        else if((buf.size() == 3)&& (buf[0] == buf[1])&&(buf[1] == buf[2])&& (i == 2)){
            if(s[0] == '1'){
                buf[1] = '0';
                s[1] = '0';
            }
            else{
                buf[1] = '1';
                s[1] = '1';
            }
            ans ++;
            i ++;
        }
        
        else if((buf.size()==3)&&(buf[0]!=buf[1])&&(buf[1] == buf[2])&&(i ==(s.size()-1))){
            ans ++;
            i++;
        }
        else if((buf.size()==2)&&(buf[0]==buf[1])&&(i ==(s.size()-1))){
            ans ++;
            i++;
        }
        
        
        else if((buf.size() == 4)&&(buf[0]!=buf[1])&&(buf[1] ==buf[2])&&(buf[2]==buf[3])){
            if(s[i]=='0'){
                s[i-1] = '1';
                buf[2] ='1';
            }
            else{
                s[i-1] = '0';
                buf[2] = '0';
            }
            buf.erase(buf.begin());
            buf.erase(buf.begin());
            ans ++;
            i++;
        }
        else if((buf.size()==4)&&(buf[0]!=buf[1])&&(buf[1]==buf[2])&&(buf[2]!=buf[3])){
            if(s[i-1]=='0'){
                s[i-1] ='1';
                s[i] = '0';
                buf[2] = '1';
                buf[3] = '0';
            }
            else{
                s[i-1] = '0';
                s[i] = '1'; 
                buf[2] = '0';
                buf[3] = '1';
            }
            buf.erase(buf.begin());
            buf.erase(buf.begin());
            i++;
            ans += 2;
             
        }
        else if((buf.size()==4)&&(buf[0]!=buf[1])&&(buf[1]!=buf[2])&&(buf[2]!=buf[3])){
            buf.erase(buf.begin());
            buf.erase(buf.begin());
            i++;
            
        }
        else if((buf.size() == 4)&&(buf[0]!=buf[1])&&(buf[1] !=buf[2] )&&(buf[2] ==buf[3])){
            if(s[i] == '1'){
                s[i] = '0';
                buf[3] = '0';
            }
            else{
                s[i] = '1';
                buf[3] = '1';
            }
            buf.erase(buf.begin());
            buf.erase(buf.begin());
            i++;
            ans ++;
        }
        else{
            i++;
        }
       /* cout << "buf ";
        for(int i=0;i<buf.size();i++){
            cout << buf[i];
        }
        cout << endl;
        cout << s << endl;
        */
    }
    cout << ans << endl;
}