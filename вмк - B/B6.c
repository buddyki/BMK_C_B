#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    int x,y,i=0,j=0,count=0;
    scanf("%d %d",&x,&y);
    double n,m,a,b;
    a=0;b=1;
    m=x-1;
    m=1/m;
    
    n=y-1;
    n=1/n;
    //printf("%.3f %.3f\n",n,m);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            if(a<0) a=-a;
            if(b<0) b=-b;
            printf("(%.3f, %.3f) ",a,b);
            a=a+m;
        }
        a=0;
        b=b-n;
        printf("\n");
        
    }
    
    return 0;
}
