#include<stdio.h>
 int main()
{
        int a,b,c;
        long sum;
        scanf("%d %d %d",&a,&b,&c);
        sum=(long)a+b+c;
        printf("%d+%d+%d=%ld\n",a,b,c,sum);
        return 0;
}