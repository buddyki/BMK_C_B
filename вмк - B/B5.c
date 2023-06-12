#include <stdio.h>

int main()
{    
    int N,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        printf("%4d %4d %4d\n",i,i*i,i*i*i);
    }
    return 0;
}
