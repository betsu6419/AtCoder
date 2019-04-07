#include<stdio.h>

int main(){
    int a,b,c,x,i,j,k,ans;
    ans = 0;
    scanf("%d",&a);    
    scanf("%d",&b);    
    scanf("%d",&c);    
    scanf("%d",&x);
    for(i=0;i<=a;++i){
        for(j=0;j<=b;++j){
            for(k=0;k<=c;++k){
                if(500*i+100*j+50*k==x){
                    //printf("500*%d+100*%d+50*%d=%d\n",i,j,k,x);
                    ans +=1;
                }
            }
        }
    }
    printf("%d",ans);
    return 0;
}