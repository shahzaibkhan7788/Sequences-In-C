#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int Cal_Series(int);
int main()
{
int x;
float sum=0;
printf("Please enter an integer from 1 to 5:");
scanf("%d",&x);
while(x<1 || x>5)
{
printf("Your input is invalid! Try again");
scanf("%d",&x);
}
sum=Cal_Series(x);
printf("\n Summation of the given series is %f",sum);
}
int Cal_Series(int n)
{
int a=12;
int b=10;
int fact1=1;
int fact2=1;
float sum=0;
for(int i=1;i<=n;i++)
{
a=14-2*i;
b=12-2*i;
if(i==n)
printf("%d!/%d!",a,b);
else
printf("%d!/%d!+",a,b);
for(int i=1;i<=a;i++)
{
fact1=fact1*i;
}
for(int i=1;i<=b;i++)
{
fact2=fact2*i;
}
sum=sum+fact1/fact2;
}
return sum;
}
