#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,sum=0,b,n,c;
scanf("%d",&n);
scanf("%d",&b);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
c=sum/b;
printf("%d",c);
getch();
}
