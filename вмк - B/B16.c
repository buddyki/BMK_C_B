#include<stdio.h>
int string_length(char *str)
{
    int i=0;
    while(str[i] != '\0') i++;
    return i;
}

int main()
{
    char str[101];
    scanf("%100[^\n]s",str);// прочитать не больше 99 сиволов
    printf("%d\n",string_length(str));
    return 0;
}