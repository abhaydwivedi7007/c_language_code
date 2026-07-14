#include<stdio.h>
int power(int a , int b){
    if (b==0){
        return 1;
    }
   
    int recAns = a*power(a,b-1);
   
    return recAns;
}
int main(){
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
     printf("Enter power : ");
    scanf("%d",&b );

    int ans = power(a,b); 
   
     printf("%d",ans);
  
    return 0;
}