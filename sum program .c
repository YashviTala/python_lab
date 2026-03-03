// No argument No Return value 

#include<stdio.h>
#include<conio.h>
void xyz();
void main()
{
          clrscr();
          xyz();
          getch();
}
void xyz()
{
     int x,y,z;
     printf("enter x:");
     scanf("%d",&x);
     printf("enter y:");
     scanf("%d",&y);
     z=x+y;
     printf("sum=%d",z);
}