#include<stdio.h>
#include<conio.h>

main()
{
	int lang,bill=0;
	clrscr();
	printf("ENTER......\n\n");
	printf("1. for english\n");
	printf("2. for hindi\n");
	printf("3. for gujarati\n\n");
	printf("enter your choice: ");
	scanf("%d",&lang);
	clrscr();
	switch(lang)
		{
		   case 1:
			printf("you have selected english\tprice\n\n");
			printf("1) for internet recharge\t2100\n");
			printf("2) for top-up recharge\t\t1000\n");
			printf("3) for special recharge\t\t1500\n");
			printf("enter your choice: ");
			scanf("%d",&lang);
				switch(lang)
						{
							case 1:
								printf("\nyou have selected INTERNET recharge!\n");
								break;
							case 2:
								printf("you have selected TOP-UP recharge!\n");
								break;
							case 3:
								printf("you have selected SPECIAL recharge!\n");
								break;
							default:
								printf("invalid input!!");
						}

			break;
		   case 2:
			printf("aapne hindi chuna hain\n\n");
			printf("internet recharge ke liye 1 dabaiye !!\n\n");
			printf("top-up recharge ke liye 2 dabaiye !!\n\n");
			printf("special recharge ke liye 3 dabaiye !!\n\n ");
			printf("aapki choice daliye: ");
			scanf("%d",&lang);
				switch(lang)
						{
							case 1:
								printf("\nyou have selected INTERNET recharge!\n");
								break;
							case 2:
								printf("you have selected TOP-UP recharge!\n");
								break;
							case 3:
								printf("you have selected SPECIAL recharge!\n");
								break;
							default:
								printf("invalid input!!");
						}

			break;
		   case 3:
			printf("tame gujarati pasand karyu che\n\n");
			printf("internet recharge mate 1 dabavo !!\n\n");
			printf("top-up recharge mate 2 dabavo !!\n\n");
			printf("special recharge mate 3 dabavo !!\n\n ");
			printf("tamari choice nakho: ");
			scanf("%d",&lang);
				switch(lang)
						{
							case 1:
								printf("\nyou have selected INTERNET recharge!\n");
								break;
							case 2:
								printf("you have selected TOP-UP recharge!\n");
								break;
							case 3:
								printf("you have selected SPECIAL recharge!\n");
								break;
							default:
								printf("invalid input!!");
						}

			break;

		   default:
			printf("!!invalid input!!");

		}
		printf("\n\n\n\n--------------------YOU HAVE SUCCESFULLY RECHARGED YOUR NUMBER------------------");
		printf("\n---------------------------THANKS FOR USING OUR SERVICE-------------------------");

     getch();

}
