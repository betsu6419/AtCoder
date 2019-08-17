#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    double ans = 0;
    int water = 0;
    int sugar = 0;
    for(int i=0;i*100*a<f;i++){
        for(int j=0;j*100*b<f;j++){
            for(int k = 0;k*c<f;k++){
                for(int l=0;l*d<f;l++){
                    //cout << i << " " << j << " " << k << " " << l << endl;
                    if(100*i*a+100*j*b+k*c+l*d > f){
                        continue;
                    }
                    if(i==0&&j==0){
                        continue;
                    }
                    double x = double(double(k*c+l*d)/double(i*100*a+j*100*b+k*c+l*d));
                   // cout << double(e)/double(100+e)<<endl;
                    //cout << d<<endl;
                    if(x>= ans && (a*i+b*j)*e>=(k*c+l*d)){
                        ans = x;
                        water = i*100*a+j*100*b+k*c+l*d;
                        sugar = k*c+d*l;
                      //  cout << "new" << endl;
                    }
                }
            }
        }
    }
    cout << water << " "<<sugar << endl;
    return 0;
}