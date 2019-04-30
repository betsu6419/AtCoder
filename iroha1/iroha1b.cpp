#include <iostream>
#include <queue>
#include <string>

using namespace std;


int main(){
	queue<char> q;
  int n;
  	string s;
  	cin >> s;
  cin >> n;
  for(int i=0;i<s.size();i++){
    q.push(s[i]);
  }
  for(int i=0;i<n;i++){
    q.push(q.front());
    q.pop();
  }
  while(!q.empty()){
    cout << q.front();
    q.pop();
  }
  cout << endl;
  return 0;
}
