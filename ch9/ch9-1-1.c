#include<stdio.h>

main()
{
	
	char str[20];
	int i;
	
	
	printf("Enter your name : ");
	scanf("%s",str);
	
	
	for(i=0 ; i<=20 ; i++ )
	{
		if(str[i]>=65 && str[i]<=90)
		{ 
			str[i] += 32;
		}	
	}
	printf("converted charchter : %s ",str);
}
