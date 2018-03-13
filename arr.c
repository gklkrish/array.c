#include<stdio.h>
void main()
{
int a[10],u,h,n,temp;
printf("enter limit");
scanf("%d",&n);
printf(" enter the number");
for(u=0;u<n;u++)
{
scanf("%d",&a[u]);
}
printf("sorted array");
for(u=0;u<n;u++)
{
for(h=1;h<n;h++)
{
if(a[u]>a[h])
{
temp=a[u];
a[u]=a[h];
a[h]=temp;
}}
}
for(u=0;u<n;u++)
{
printf("%d\n",a[u]);
}
}
