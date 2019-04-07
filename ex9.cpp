#include<iostream>
using namespace std;

int main(){
  int a,b,x;
  int temp1,temp2,temp3;
  cin >> x>>a >> b;
  cout << (temp1 = ++x) << endl;
  cout << (temp2 = temp1* (a+b)) << endl;
  cout << (temp3 = temp2 * temp2) << endl;
  cout << (--temp3) << endl;
}
