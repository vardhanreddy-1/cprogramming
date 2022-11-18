#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("enter the number for multiplication table: ");
    scanf("%d",&n);
    if(n>0)
    {
    for(i=1;i<=20;i++)
      {
        printf("%d * %d = %d \n",n,i,n*i);
      }
    } 
    else
    {
         printf("enter a correct number !!!!");
    }
}