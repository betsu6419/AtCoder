#include<stdio.h>

int main(){
    int n,i,c,ans,j,sw;
    long a[200];
    ans = 0;
    scanf("%d",&n);
    //printf("n = %d\n",n);
    for(i=0;i<n;++i){
        scanf("%ld",&a[i]);
        //printf("start a[%d]=%ld\n",i,a[i]);
    }
    while(1){
        for(j=0;j<n;++j){
            if(a[j]%2 != 0){
                //printf("%ld is out ans is %d\n",a[j],ans);
                printf("%d",ans);
                return 0;
            }
        a[j] = a[j]/2;
        //printf("a[%d]=%ld\n",j,a[j]);
        }
        ans +=1;
    }
    return 0;
}