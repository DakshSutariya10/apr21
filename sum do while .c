#include<stdio.h>

main()
{
	int a=1,n,fact=1;

	printf("enter value=");
	scanf("%d",&n);

do
	{
		fact=fact*a;
		a++;
	}	while(a<=n);
	    printf("factorial of %d=%d",n,fact);
}
