#include<stdio.h>
int main()
{
int n;
printf("enter the year : ");
scanf("%d",&n);
if ((n%4==0&&n%100!=0) || (n%4==0))
{
    printf("%d year is leap year",n);
}
else
{
    printf("%d year is not leap year",n);
}


    return 0;
}