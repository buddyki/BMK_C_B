#include<stdio.h>
 int main(){
	 int ch;
	 int sum=0;
	 ch=getchar();
	 while(ch != EOF && ch !='\n')
         {
		 if(ch >='0' && ch <='9')
			 sum += ch-'0';
		 ch=getchar();
         }
	 printf("%d\n",sum);
	 return 0;
}