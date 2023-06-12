#include<stdio.h>
unsigned int sum=0;
void print_bin(int num,int t)
{
    unsigned int mask = t;
    int k;
    for(;mask;mask>>=1)
    {
        if(mask&num){
            printf("1");
            k=1;
        }
       
        else{
            printf("0");
            k=0;
        }
        sum=(sum<<1)+k;
        
       
    }
    //printf("sum=%d\n",sum);
        
}
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    print_bin(a,64);
    print_bin(b,8);
    print_bin(c,16);
    printf("\n");
    printf("%d",sum);
    return 0;
}