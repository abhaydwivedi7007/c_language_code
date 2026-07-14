#include<stdio.h>
int totalways (int n){ 
    if(n<=2){
        return n ;
    }
    int recAns = totalways(n-1)+ totalways(n-2);
    return recAns;

}
int main()
{ int n;
printf("enter number of stair : ");
scanf("%d",&n);
int ans = totalways(n);
printf("totalways = %d",ans);
return 0;

}// same as fibbonaci series question 