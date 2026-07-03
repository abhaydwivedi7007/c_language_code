#include<stdio.h>
int main ()
{   int i,j,n;
    char ch = 'A';
    printf("enter the number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
   for(j=1;j<=i;j++)
   {
     if(i%2==0)
     {
        printf("%c",ch);
        ch = ch +1;
     }
     else
     {
         printf("%d",j);
     }
   }
       printf("\n");
    }
    
    return 0;
}