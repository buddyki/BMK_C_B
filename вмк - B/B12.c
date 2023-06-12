#include<stdio.h>
void print_bin(short num)
{
        unsigned short mask = 4;
        int count=0;
	for(;mask;mask>>=1)
	{
	    //printf("count=%d num=%d \n",count,num);
	    if (count==0){
	        if(mask&num) printf("r");
		    else printf("-");
		    //printf("\n");
	    }
	    
	    if (count==1){
	        if(mask&num) printf("w");
		    else printf("-");
		   // printf("\n");
	    }
	    
	    if (count==2){
	        if(mask&num) printf("x");
		    else printf("-");
		    //printf("\n");
	    }
	    count++;
		//printf("\n");
	}
}
int main()
{
	short n,nn;
	scanf("%ho",&n);
	nn=n;
	print_bin(n/64);
	n=n/8;
	print_bin(n%8);
	print_bin(nn%8);
	return 0;
}