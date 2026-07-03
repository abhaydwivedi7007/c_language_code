#include<stdio.h>
int main()   
{int i,n,j,num=1;
   //1
   //01
   //101
   //0101
    printf("enter the number of rows : ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {   
           
           {
            printf("%d",(i+j+1)%2);
           }
        
        }
        printf("\n");
    }


return 0;
}