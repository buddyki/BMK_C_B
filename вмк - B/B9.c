#include <stdio.h>

int main()
{
    int ch;
    int sum=0;
    int sun=0;
    ch=getchar();
    while(ch != EOF && ch !='\n'){
        if(ch >= 'A' && ch <= 'Z') sum=sum+1;
        if(ch >= 'a' && ch <= 'z') sun=sun+1;
        ch=getchar();
    }
    printf("%d %d\n",sun,sum);

    return 0;
}