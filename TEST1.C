#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("enter the number\n");
scanf("d",&a);
if(a>0)
printf("%d is positive\n",a);
else if(a<0)
printf("%d is negative\n",a);
else
printf("the given number is %d",a);
getch();
}
