#include<stdio.h>
int main()
{
 int i,j,n;
 printf("Enter the number : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++) // ullta print krne ke liye j<=(n-i)+1 kr lo bs
  {
     printf("%d",j);
  }
 printf("\n");

 }

    return 0;
}