#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int Cal_LCM(int,int);
int main()
{
int num1 ,num2;
int lcm;
printf("Please enter Two positive integer number from 2 to 100:");
scanf("%d%d",&num1,&num2);
while(num1<2 || num1>30)
{
printf("Bum1 is invalid! Try again");
scanf("%d",&num1);
}
while(num2<2 || num2>30)
{
printf("Num2 is invalid! Try again");
scanf("%d",&num2);
}
lcm=Cal_LCM(num1,num2);
printf("LCM of %d and %d is %d",num1,num2,lcm);
}
int Cal_LCM(int m,int n)
{
int fact=1;
for(int i=2;i<=m*n;i++)
{
if(n%i==0 && m%i==0)
{
n=n/i;
m=m/i;
fact=fact*i;
i=2;
}
}
fact=fact*m*n;
return fact;
}
