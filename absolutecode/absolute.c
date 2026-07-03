#include<stdio.h>
int main ()
{
 int num,i,n;
 printf("enter the number : ",n);
 scanf("%d",&n);
 if(n<0)
 {
   i = n * (-1);
    printf("the absolute number is:%d ",i);
 }
 else
      {
        printf("the absolute number is %d",n);
      }
return 0;
}