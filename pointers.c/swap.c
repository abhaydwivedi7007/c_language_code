#include <stdio.h>
void swap(int *a , int *b ){
    int temp=*a; //*a tell the value store at that address //
    *a=*b;
    *b=temp;
    return;
}
int main(){ int a;
    printf("enter first number : ");
    scanf("%d",&a);
    int b;
     printf("enter second number : ");
    scanf("%d",&b);
    swap(&a , &b);
    printf("the value of first number is %d\n",a);
    printf("the value of second number is %d",b);
    return 0;

}0