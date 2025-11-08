// Program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths
#include<stdio.h>
int main(){

printf("Enter the angles of three sides : ");
int a1,a2,a3,sum;
float s1,s2,s3;
scanf("%d",&a1);
scanf("%d",&a2);
scanf("%d",&a3);
sum = a1+a2+a3;
if(sum!=180)
printf("Its not a Triangle");

else{
printf("Its a Triangle\n");
printf("Enter three sides of triangle : ");
scanf("%f",&s1);
scanf("%f",&s2);
scanf("%f",&s3);

if((s1==s2)&&(s1==s3)&&(s2==s3))
printf("Its a Equilateral Triangle \n");

else if((s1==s2)||(s2==s3))
printf("Its a Isosceles Triangle \n");

else
printf("Its a Scalene Triangle \n");

}

    return 0;
}
