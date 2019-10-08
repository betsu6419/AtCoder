#include<iostream>
#include <string>

using namespace std;

int main(){
    string o,e;
    cin >> o >> e;
    if(o.size() > e.size()){    
        for(int i=0;i<e.size();i++){
            cout << o[i];
            cout << e[i];
        }
        cout << o[o.size()-1];
    }

    else if(o.size() == e.size()){    
        for(int i=0;i<o.size();i++){
            cout << o[i];
            cout << e[i];
        }
    }
    cout << endl;
    return 0;
}