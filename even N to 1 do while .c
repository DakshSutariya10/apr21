#include<stdio.h>

main()

{
	int a=1,n;
	
	printf("value of N=");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d\n",n);
		}
		
		n--;
	}while(n>=1);
}
