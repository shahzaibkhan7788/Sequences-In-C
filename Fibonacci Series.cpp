#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
void Cal_Fabonacci(int);
int main()
{
int x;
float sum=0;
printf("Please enter number of terms less than or equal to 30:");
scanf("%d",&x);
while(x<2 || x>30)
{
printf("Your input is invalid! Try again");
scanf("%d",&x);
}
Cal_Fabonacci(x);
}
void Cal_Fabonacci(int n)
{
int f0=0;
int f1=1;
int fn;
for(int i=1;i<=n;i++)
{
printf("%d\t",f0);
fn=f0+f1;
f0=f1;
f1=fn;
}
}
