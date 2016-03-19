/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-1/11/2015
   */
#include<stdio.h>
#include<string.h>
int main()
{
	int a[100]={99,	32,	47,	68,	15,	64,	74,	48,	81,	80,	85,	60,	94,	15};
	int i,n,j,t,k,pos_min;
	/*printf("enter the no. of numbers\n");
	scanf("%d",&n);
	printf ("now enter the nos.\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}*/
	for(i=1;i<14;i++)
	{
		pos_min=i;
	for(j=i-1;j>=0;j--)
	{
	if(a[pos_min]<a[pos_min-1])
	{
		t=a[pos_min];
		a[pos_min]=a[pos_min-1];
		a[pos_min-1]=t;
		pos_min--;
	}
     }
	if(i!=-1)
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

