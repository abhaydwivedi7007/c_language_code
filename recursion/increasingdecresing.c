#include<stdio.h>
void decreasing(int n){
    if (n==0){
        return;
    }
    printf("%d\n",n);// for decreasing
    decreasing(n-1);
     printf("%d\n",n);// for increasing 
    return;
}
int main(){
int n ;
printf("enter a number : ");
scanf("%d",&n);
decreasing(n);
return 0;
}