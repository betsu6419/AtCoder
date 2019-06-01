#include <iostream>
#include<cassert>
using namespace std;

int v_x,v_y;
void rotate(){
    int tmp = v_x;
        v_x = -v_y;
        v_y = tmp;
}
int main(){
    int x_1,x_2,y_1,y_2;
    cin >> x_1>>y_1>>x_2>>y_2;
    int x_3,y_3,x_4,y_4,x_5,y_5;
    v_x = x_2-x_1;
    v_y = y_2-y_1;
    rotate();
    x_3 = x_2 + v_x;
    y_3 = y_2 + v_y;
    rotate();
    x_4 = x_3 + v_x;
    y_4 = y_3 + v_y;
    rotate();
    x_5 = x_4 + v_x;
    y_5 = y_4 + v_y;
    assert(x_1 == x_5);
    assert(y_1 == y_5);
    cout << x_3 << " "<< y_3<< " " << x_4<< " " << y_4 << endl;
    return 0;
}