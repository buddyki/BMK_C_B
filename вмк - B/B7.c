#include <stdio.h>

int main()
{
    int i=0,j=0,a,b,n,num,nu,count=0;
    long pro;
    scanf("%d %d %d",&a,&b,&n);
    
    
    num=(b-a)+1;
    nu=(b-a);
    int arr[num];
    for(int i=1;i<=num;i++){
        arr[i]=a;
        a++;
        //printf("a[%d]=%d\n",i,arr[i]);
        //printf("num=%d\n",num);
    }
    for(int j=0;j<num;j++){
        if( (i+j) == 0 ){
            printf("%*s",n,"");
            printf(" ");
        }
        if(j==0){
            for(int i=1;i<num;i++){
                printf("%*d", n, arr[i]);
                if(i<nu) printf(" ");
            }
        }
        if(j>0){
            printf("%*d", n, arr[j]);
            printf(" ");
            for(int i=1;i<num;i++){
                pro=(long)arr[i]*arr[j];
                printf("%*ld", n, pro);
                if(i<nu) printf(" ");
            }
        }
        printf("\n");
        
    }
    return 0;
}