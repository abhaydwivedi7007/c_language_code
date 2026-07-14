#include<stdio.h>
int logpower(int a , int b){
    int ans;
    if (b==0)
     return 1;
    
   int x=logpower(a,b/2);
   if(b%2==0)
     ans = x*x;
   else 
    ans = x*x*a;
    int recAns = ans;
    return recAns;
}
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
     printf("Enter power : ");
    scanf("%d",&b );
   int ans = logpower(a,b); 
   
     printf("%d",ans);
    return 0;
}