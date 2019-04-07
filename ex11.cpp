#include <iostream>
using namespace std;

int main(){
  int n, a, b,i;
  string op;
  cin >> n >> a;
  for(i=0;i<n;i++){
    cin >> op >> b;
    if(op == "+"){
      a = a+b;
    }
    else if(op == "-"){
      a = a-b;
    }
    else if(op == "*"){
      a = a*b;
    }
    else if(op == "/"){
      if(b == 0){
        cout << "error" << endl;
        break;
      }
      a = a/b;
    }
    else{
      cout << "error" << endl;
      break;
    }
    cout << i+1 << ":"<< a << endl;
  } 
}