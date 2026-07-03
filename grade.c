#include<stdio.h>
int main()
{
int n;
printf("enter the number : ");
scanf("%d",&n);
if (n>=90 && n<=100)
{
    printf("Grade A");
}
else if (n>=80 && n<90)
{
    printf("Grade B");
}
 else if  (n>=60 && n<80)
{
    printf("Grade C");
}
else if (n>=40 && n<60)
{
    printf("Grade D");
}
 else if (n>=33 && n<40)
{
    printf("Grade E");
}
else
{
printf("Grade F");
}
return 0 ;
}