#include <iostream>
#include <vector>

using namespace std;
bool solve(int i,int j,vector<vector<char> > in,vector<vector<bool> > check,bool* ok){
    if(i<0 || j<0 ||i>=in.size() || j >= in[0].size() ){
        return false;
    }
    else if(in[i][j]== 'g'){
        *ok = true;
        return true;
    }
    else if(check[i][j] == true){
        return false;
    }
    else if(in[i][j] =='#'){
        return false;
    }
    else if(in[i][j] == '.' || in[i][j] == 's' || ok ==false){
        check[i][j] = true;
        solve(i-1,j,in,check,ok);
        solve(i+1,j,in,check,ok);
        solve(i,j-1,in,check,ok);
        solve(i,j+1,in,check,ok);
    }
}

int main(){
    int h;cin >> h;
    int w;cin >> w;
    int s_i,s_j;
    vector<vector<char> > in(h,vector<char>(w));
    for(int i = 0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
            if(in[i][j] == 's'){
                s_i = i;s_j=j;
            }
        }
    }
    vector<vector<bool> > check(h,vector<bool>(w,false));
    bool ok = false;
    solve(s_i,s_j,in,check,&ok);
    if(ok){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}