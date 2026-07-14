#include<stdio.h>
void decreasing(int n){
    if (n==0)
    {
    return;
}   printf("%d\n",n); // send this line 2 step below for increasing number printing
    decreasing(n-1);
    return;

}

int main(){
     int n;
    printf("enter a number: ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}