#include <stdio.h>

int main()
{
    int a,b,max,min;
    int count=0;
    int sum=0;
    while(count<=9){
        count=count+1;
        scanf("%d",&a);
        sum=sum+a;
        if(min>=a) min=a;
        if(a>=0){
            if(max<=a) max=a;
        }
        if(a<0){
            a= ~a+1;
            if(max<=a) max=a;
        }
            
    }
    scanf("%d",&b);
    
    if(b==1) {printf("%d\n",sum);}
    if(b==2){printf("%d\n",min);}
    if(b==3){printf("%d\n",max);}
    
    

    return 0;
}