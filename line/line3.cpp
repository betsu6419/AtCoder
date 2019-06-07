#include<iostream>
#include<vector>

using namespace std;
int V;
int E;
int X;
int Y;
int n[100000];
int m[100000];
int M[100000];
bool M_sw[100000];
vector<vector<int > > ab(1000000,vector<int>(0,0));

int main(){
    cin >> V >> E >> X >> Y;
    for(int i=0;i<=V;i++){
        M[i] = -1;
        M_sw[i] = false;
    }
    for(int i=0;i<X;i++){
        cin >> n[i];
    }
    for(int i=0;i<X;i++){
        cin >> m[i];
    }
    for(int i=0;i<X;i++){
        M[n[i]] = m[i];
        M_sw[n[i]] = true;
    }
    for(int i=0;i<E;i++){
        int a,b;
        cin >> a >> b;
        ab[a].push_back(b);
        ab[b].push_back(a);
    }
    /*
    for(int i=1;i<=V;i++){
        for(int j=0;j<ab[i].size();j++){
            cout << ab[i][j] << " ";
        }
        cout << endl;
    }*/
  
    for(int i=0;i<Y;i++){
        /*cout << "i=" << i << endl; 
          for(int j=1;j<=V;j++){
           cout << "M[" <<j << "]=" << M[j] << endl; 
         }*/
        for(int j=1;j<=V;j++){
            if(M[j] == -1){
                int max = -1;
                for(int k = 0;k<ab[j].size();k++){
            //        cout << "ab " << j << " " <<  k << "="<<ab[j][k]<<endl;
                    if(M[ab[j][k]] > max && M_sw[ab[j][k]] == true){
                        max = M[ab[j][k]];
              //        cout << "max =" << max << endl;
                    }
                }
                if(max >0){
                   M[j] = max + 1;
                }
            }
            
        }
        for(int j=1;j<=V;j++){
            if(M[j] > 0){
                M[j] -= 1;
                if(M[j] == 0){
                    M_sw[j] = false;
                }
                if(M[j] >0 && M_sw[j] == false){
                    M_sw[j] = true;
                }
            }
        }
    }


    int ans=0;
    for(int i=1;i<=V;i++){
        if(M[i] > 0){
            ans ++;
        }
    }
    cout << ans << endl;
}
