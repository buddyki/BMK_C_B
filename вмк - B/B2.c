#include <stdio.h>

int main()
{
    int i;
    long a,b,c,sum;
    int n;
    a=0;
    b=1;
    sum=0;
    scanf("%d",&n);
    sum=1;
    for(i=3;i<=n;i++){
        c=a+b; 
        sum=sum+c;
        a=b;
        b=c;
    }

    printf("%ld",sum);

    return 0;
}
//i=    0 1 2 3 4 5 6 7 8  9
//a[i]  0 1 1 2 3 5 8 13 21
//sum=  0 1 2 4 7 12 20  