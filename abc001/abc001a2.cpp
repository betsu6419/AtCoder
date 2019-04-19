#include <iostream>
#include <vector>
using namespace std;

int h;
int w;
char in[500][500];
bool check[500][500];

void search(int i ,int j){
    if(i<0 || j < 0 || i>= h || j >= w ){
        return;
    }
    if(check[i][j]){
        return;
    }
    if(in[i][j]=='#'){
        return;
    }
    check[i][j] = true;
    //cout << i << " " << j << "is true" << endl;
    search(i+1,j);
     search(i-1,j);
 search(i,j+1);
 search(i,j-1);

}
int main(){
    cin >> h;
    cin >> w;
    int s_i;
    int s_j;
    int g_i,g_j;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> in[i][j];
            check[i][j] = false;
            if(in[i][j] == 's'){
                s_i = i;
                s_j = j;
            }
            if(in[i][j] == 'g'){
                g_i = i;
                g_j = j;
            }
        }
    }
    search(s_i,s_j);
    if(check[s_i][s_j] == true && check[g_i][g_j] == true){
        cout << "Yes" <<endl;
    }
    else cout << "No" << endl;
}