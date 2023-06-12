#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10000];
    int i=0,t=0,m;
    
    //scanf(ch);
    while( (ch[i]=getchar()) != '\n')
    {
        i++;
    }
    
    //检查n;
     int n=i;
    // printf("n=%d\n",n);
    
    //удалить из нее повторяющиеся символы и все пробелы из нее повторяющиеся символы и все пробелы
    for(int i=0;i<n;i++) 
    {
        m=0;
        //printf("ch[%d]=%c\n",i,ch[i]);
        //удалить пробелы
        if( ch[i] == ' ') 
        {
            //printf("%c\n",'!');
        }
        //удалить из нее повторяющиеся символы
        else
        {
            //printf("i=%d\n",i);
            for(t=0;t<i;t++)
            {
                if(ch[t] == ch[i]) m=1;
            }
            if(m==0) printf("%c",ch[i]);
            
        }
        
    }
 
    
    
}