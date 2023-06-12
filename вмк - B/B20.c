#include <stdio.h>

int my_strcmp(char *s1, char *s2)
{
    int i=0;
    while(s1[i] == s2[i] && s1[i] != '\0' )
    {
        i++;
    }
    return s1[i]-s2[i];
}



int main()
{
    char s1[101];
    char s2[101];
    char ch[101];
    int i=0,m=0,t1=0,t2=0;
    
    while(m<2)
    {
        ch[i]=getchar();
        if(m==1){
            s2[t2]=ch[i];
            t2++;
        }
        
        else{
            s1[t1]=ch[i];
            t1++;
        }
        
        //printf("m=%d\n",m);
        if(ch[i]=='\n') m++;
        i++;
        
    }

    //printf("ch=%s\n",ch);
    //printf("s1=%s\ns2=%s\n",s1,s2);
    //First, Second, Equal
    if(my_strcmp(s1,s2) > 0) printf("First");
    if(my_strcmp(s1,s2) < 0) printf("Second");
    if(my_strcmp(s1,s2) == 0) printf("Equal");
    return 0;
}