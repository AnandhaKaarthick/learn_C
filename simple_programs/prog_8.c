// Program to find largest number
#include<stdio.h>
void main()
{ 
   int a,b,c;
printf("Enter Three Numbers: \n");
scanf("%d %d %d", &a,&b,&c);
   if(a>b && a>c)
printf("\nGreatest Number Is :%d",a);
   else if(b>c && b>a)
printf("\nGreatest Number Is :%d",b);
   else if( c>a && c>b)
printf("\nGreatest Number Is :%d",c);
   else
printf("\nAll Are Equal"); 
}
