#include<stdio.h>

int main(){
    int a,b,n,ans,i,j,k,l,m,n10000,n1000,n100,n10,n1;
    ans = 0;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    printf("n = %d, a = %d, b = %d\n",n,a,b);
  
    for(m=0;m<=1;++m){
        for(l=0;l<=9;++l){
            for(k=0;k<=9;++k){
                for(j=0;j<=9;++j){
                    for(i=0;i<=9;++i){
                        if(a <= (m+l+k+j+i) && (m+l+k+j+i) <= b && 10000*m+1000*l+100*k+10*j+i<=n  ){
                            printf("%d",ans);
                            ans += 10000*m+1000*l+100*k+10*j+i;
                            printf(" + %d%d%d%d%d = \t%d\n",m,l,k,j,i,ans);
                        }
                    }
                }
            }
        }
    }
    printf("sum = \t");
    printf("%d",ans);
    return 0;
}