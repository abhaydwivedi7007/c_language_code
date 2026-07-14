#include<stdio.h>
int fibo(int n){
      if (n<=2){
        return 1;
    }
    int recAns =fibo(n-1)+fibo(n-2);
    return recAns;
}
int main(){
    int n;
    printf("Enter number  : ");
    scanf("%d",&n);
    int ans = fibo(n);
     printf("%d",ans);
    return 0;
}