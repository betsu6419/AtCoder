#include<iostream>
using namespace std;

int main(){
  string s,ans = "";
  cin >> s;
  //cout << s << endl;
  int n = s.size();
  //cout << n << endl;
  int n_ans = 0;
  int i;
  for(i = 0;i<n;i++){
    if(s.at(i) == 'A' || s.at(i) == 'T' ||s.at(i) == 'G' ||s.at(i) == 'C'){
    ans = ans + s.at(i);
      //cout << ans << endl;   
    }
    else{
       if(ans.size()> n_ans){
        n_ans = ans.size();
      }
      ans = "";
    }
  }
   if(ans.size()> n_ans){
        n_ans = ans.size();
      }
  cout << n_ans << endl;
}