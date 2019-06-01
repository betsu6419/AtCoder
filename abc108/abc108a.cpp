#include<iostream>
using namespace std;

int main(){
  int n,ans;
  cin >> n ;
  for(int i=1;i<=n;i++){
    for(int j=1;j<i;j++){
      if(i%2 == 0 && j %2 == 1){
        ans ++;
      }
      else if(i % 2 == 1 && j % 2 == 0){
        ans ++;
      }
    }
  }
  cout << ans << endl;
}
