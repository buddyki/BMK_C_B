#include <stdio.h>

int main()
{
    int num,count=0,sum=0;
    int sym=1;
    scanf("%d",&num);
    sum=num;
    while(scanf("%d",&num) == 1){
        sum=sum+(num*sym);
        sym=-sym;
        //printf("num=%d\n",num);
    }
    
    printf("%d\n",sum);
    return 0;
}