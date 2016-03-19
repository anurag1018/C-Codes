/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-20/10/2015
   */

#include<stdio.h>
#include<string.h>
int main()
{
	int a[100]={99,	32,	47,	68,	15,	64,	74,	48,	81,	80,	85,	60,	94,	15};
	int i,n,j,t,k;
	/*printf("enter the no. of numbers\n");
	scanf("%d",&n);
	printf ("now enter the nos.\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}*/
	for(i=0;i<14;i++)
	{
	for(j=0;j<((14-1)-i);j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
	if(i!=0)
		{
		for(k=0;k<14;k++)
		{
		printf("%d ",a[k]);
		}
		printf("\n\n\n");
		}
	}
	printf("\n\n after the total sorting \n\n");
	for(i=0;i<14;i++)
	{
	printf("%d ",a[i]);
	}
	getch();
}

