#include<stdio.h>
unsigned int count=0;

void print_bin(int num,int t)
{
    unsigned int mask = t;
    unsigned int sum=0;
    int k;
    for(;mask;mask>>=1)
    {
        if(mask&num){
           // printf("1");
            k=1;
        }
       
        else{
            //printf("0");
            k=0;
        }
        sum=sum*2+k;
    }
    if(count==0){
        if(sum<=49) sum=20*100+sum;
        else sum=19*100+sum;
    }
    printf("%d ",sum);
    count++;
        
}
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    a=d>>9;
    print_bin(a,64);
    b=d<<7;
    b=b>>12;
    print_bin(b,8);
    c=d<<11;
    c=c>>11;
    print_bin(c,16);
    // printf("\n");
    return 0;
}
