#include<stdio.h>
int main()
{int i,n,j,m;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    printf("enter the number of column : ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if (i==1 || i==n || j==1 || j==m)
            {
                 printf("*");
            
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }


return 0;
}