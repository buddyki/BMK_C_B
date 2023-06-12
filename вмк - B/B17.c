#include <stdio.h>



int main()
{
    int n,i,j,pro,count=0;
    scanf("%d",&n);
    int num=n;
    for(i=1;i<=num;i++){
        for(j=1;j<=num;j++){
            pro=i*j;
            //printf("%d ",pro);
            while(pro>0){
                if((pro%10)==3) count=count+1;
                pro=pro/10;
            }
            
        }
        //printf("\n");
    }
    printf("%d\n",count);
    return 0;
}