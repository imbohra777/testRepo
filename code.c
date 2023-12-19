#include <stdio.h>
#include <conio.h>
int main()
{
    int year ;
    printf (" enter the year ");
    scanf ("%d", &year);
    
    if ((year%4==0)&&(year%100==0)||(year%400==0))
   {
    printf("balle balle");
   }
   else
   {
    printf("teri maa ki chut");
   }
   return 0 ;

}