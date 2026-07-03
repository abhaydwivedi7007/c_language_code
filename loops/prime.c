#include<stdio.h>
int main()
{
int n,i,prime=0;
printf("enter the number : ");
scanf("%d",&n);
if (n<=1){
     prime=1;
     break;
}
for(i=2;i<=n/2;i++){

if(n%i==0){
prime=1;
break;
}
}






    return 0;
}