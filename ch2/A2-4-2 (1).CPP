#include<stdio.h>
#include<conio.h>
main()
{
     int r = 10, l=5;
     float pi = 3.14;
     float a=2;
     float b=4;
     float c=0.5;


      clrscr();
      printf("area of circle:%.2f*%d=%f\n",pi,r,pi*r*r);
      printf("area of square:%d * %d = %d\n",l,l,l*l);
      printf("area of triangle: %.1f *%.2f *%.2f = %.2f\n",c,a,b,c*a*b);
      printf("area of rectangle: %d * %d * %d = %d",l,a,b,a*l*b);
      getch();
}