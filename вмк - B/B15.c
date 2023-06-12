#include<stdio.h>
int main()
{

	int num;
	while(scanf("%d",&num)==1)
	{
		if(num%1000 ==0) break;
		int sum =0;
		while(num)
		{
			int dight =num%10;
			num /=10;
			if (dight ==5)
				continue;
			sum +=dight;
		}

		printf("%d ",sum);
	}
	return 0;
}