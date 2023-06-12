#include<stdio.h>

main()
{
	int n;
	
	printf("Enter a number :");
	scanf("%d",&n);
	
	int a[n],i;
	float sum=0;
	
		for(i=0;i<n;i++)
			{
			printf("Enter a[%d]:",i);
			scanf("%d",&a[i]);
			sum += a[i];
	 	    }
		
		printf("sum : %d\n",sum);
		printf("average : %f",sum/n);
}

