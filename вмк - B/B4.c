#include <stdio.h>

int main()
{    char ch;
     int a=0,b=0,c=0;
    
    while((ch=getchar())!='\n'){
        if(ch == '=') {a=a+1;}
        //putchar(ch);
        if(ch != '=') {c=c+1;}
    }
    
    while((ch=getchar())!='\n'){
        if(ch == '=') {b=b+1;}
        //putchar(ch);
        if(ch != '=') {c=c+1;}
    }
    if(c!=0){
        printf("Incorrect");
        return 0;
    }
    if(a>b) printf("First\n");
    if(a<b) printf("Second\n");
    if(a==b) printf("Equal\n");
    //printf("%d\n",a);
    //printf("%d\n",b);
    
    return 0;
}

//scanf("%s",&ch);
//ch=getchar();
//putchar(ch);
