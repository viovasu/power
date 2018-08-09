#include<stdio.h>

int main() 
{
    int b,e,p=1;
    printf("enter the value of the number and its power value");
    scanf("%d%d",&b,&e);
   for(int i=1;i<=e;i++)
   {
       p=p*b;
     
   }  
   printf("\n%d",p);
   
}