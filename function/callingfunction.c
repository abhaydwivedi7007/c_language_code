#include<stdio.h>
void england (){
    printf("you are in england\n");
    return;
}
void austraila(){
    printf("you are in australia\n");
    england();
    return;
}
void india(){
    printf("you are in india\n");
    austraila();
    return;
}
int main(){
    india();// main function ke upr hoga calling function nhi toh glicth ho jaayega
    return 0;
}
// main can use only one time 