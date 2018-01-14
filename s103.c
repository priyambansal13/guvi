 #include<stdio.h>
int main()
{
int a[100],i,n,j,count=0,k=0,b=0,s[50],t=0,l=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==i)
{
count=count+1;
if(a[i]!=0)
s[k]=a[i];
k++;
}
}
b=count;
if(b>1)
{
for(k=0;k<b;k++)
{
for(l=k+1;l<b;l++)
{
if(s[k]>s[l])
{
t=s[k];
s[k]=s[l];
s[l]=t;
}
}
}
for(k=0;k<b;k++)
{
printf("%d\t",s[k]);
}
}
else if(b==1)
{
printf("%d",s[k]);
}
if(b==0)
{
printf("-1");
}
}


