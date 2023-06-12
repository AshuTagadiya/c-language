#include <stdio.h>


main()

{
  
int r, c,a,b,sum=0, i, j;


	  printf("Enter the number of rows: ");
	  scanf("%d", &r);
	  printf("Enter the number of columns: ");
	  scanf("%d", &c);

	  printf("\nEnter Array A's Elements :\n");
 		 for (i = 0; i < r; ++i)
    			for (j = 0; j < c; ++j) 
				{
      				printf("a[%d][%d]: ", i + 1, j + 1);
      				scanf("%d", &a[i][j]);
    			}

  	printf("Enter Array B's Elements :\n");
 		 for (i = 0; i < r; ++i)
 			   for (j = 0; j < c; ++j) 
				{
  				    printf("b[%d][%d]: ", i + 1, j + 1);
  				    scanf("%d", &b[i][j]);
  			    }


  for (i = 0; i < r; ++i)
  	  for (j = 0; j < c; ++j) 
	{
      sum[i][j] = a[i][j] + b[i][j];
    }


  printf("\nSum of two matrices: \n");
  
  for (i = 0; i < r; ++i)
  
 	   for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}

