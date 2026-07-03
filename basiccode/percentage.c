#include<stdio.h>
int main()
{ 
    float sub1,sub2,sub3,sub4,sub5,marks,per;
    printf("Enter the marks of the first subject : ",sub1);
    scanf("%f",&sub1);
     printf("Enter the marks of the second subject : ",sub2);
    scanf("%f",&sub2);
     printf("Enter the marks of the third subject : ",sub3);
    scanf("%f",&sub3);
     printf("Enter the marks of the four subject : ",sub4);
    scanf("%f",&sub4);
    printf("Enter the marks of the five subject : ",sub5);
    scanf("%f",&sub5);

marks=sub1+sub2+sub3+sub4+sub5;
per=(marks/5);
printf("the total marks of student is%f\n",marks);
printf("the percentage of student is%f\n",per);
return 0;  
}