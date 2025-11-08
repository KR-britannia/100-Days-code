// Sum of n natural numbers
#include<stdio.h>
int main(){

printf("Enter the value of n : ");
int n,sum = 0;
scanf("%d",&n);    

for(int i=1; i<=n; i++){
    sum+= i;
}
printf("Sum of natural number till %d is : ",n);
printf("%d",sum);

    return 0;
}