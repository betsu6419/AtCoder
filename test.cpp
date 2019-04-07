#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

bool solve(int n,int j,vector<char>& in,vector<char>& ans,vector<vector<int> >& in_c,vector<vector<int> >& ans_c){
    if((ans_c[j][0] == n-1)&&(ans_c[j][1] == n-1)){
        return true;
    }
    if((in_c[j][0] == ans_c[j][0]) && (in_c[j][1] == ans_c[j][1])){
        if(in.at(j) == 'E'){
            if(in_c[j][0] == n-1){
                return false;
            }
            else{
                ans[j] = 'S';
                ans_c[j+1][0] = ans_c[j][0] +1;
                ans_c[j+1][1] = ans_c[j][1];
                return solve(n,j+1,in,ans,in_c,ans_c);
            }
        }
        else if(in.at(j) == 'S'){
            if(in_c[j][1] == n-1){
                return false;
            }
            else{
                ans[j] = 'E';
                ans_c[j+1][0] = ans_c[j][0];
                ans_c[j+1][1] = ans_c[j][1]+1;
                return solve(n,j+1,in,ans,in_c,ans_c);
            }
        }
    }
    else{
        if(in_c[j][0] != n-1){
            ans[j] = 'S';
                ans_c[j+1][0] = ans_c[j][0] +1;
                ans_c[j+1][1] = ans_c[j][1];
                return solve(n,j+1,in,ans,in_c,ans_c);
        }
        else if(in_c[j][1] != n-1){
                ans[j] = 'E';
                ans_c[j+1][0] = ans_c[j][0];
                ans_c[j+1][1] = ans_c[j][1] +1;
                return solve(n,j+1,in,ans,in_c,ans_c);
        }
    }
    return false;
}


int main(){
    int t;
    cin >> t;
    int i;
    for(i=0;i<t;i++){
        int n;
        cin >> n;
        vector<char> in(2*(n-1));
        vector<char> ans(2*(n-1));
        vector<vector<int> > in_c(2*n+1,vector<int>(2));
        vector<vector<int> > ans_c(2*n+1,vector<int>(2));
        int j;
        in_c[0][0] =0;in_c[0][1] = 0;
        ans_c[0][0] = 0;ans_c[0][1] = 0;
        cin >> in; 
        for(j=0;j<2*(n-1);j++){
            if(in[j] == 'S'){
                in_c[j+1][0] = in_c[j][0] + 1;
                in_c[j+1][1] = in_c[j+1][1];
                cout << "s";
            }
            else if(in[j] == 'E'){
                in_c[j+1][0] = in_c[j+1][0];
                in_c[j+1][1] = in_c[j][1] + 1;
                cout << "e";
            }
        }
        //cout << "before solve";
        solve(n,0,in,ans,in_c,ans_c);
        cout << "Case #"<< i << ": ";
        for(j=0;j<n;j++){
            cout << ans[j];
        }
        cout << endl;
    }
    return 0;
}