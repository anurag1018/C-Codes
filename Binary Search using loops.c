/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-29/11/2015
   */
#include<stdio.h>

int main()
{
	int a[100]={99,32,47,68,15,64,74,48,81,80,85,60,94,15};
	int i,n,j,t,k,pos,mid,num;
	
	int last=13;
	int first=0;
	int flag=0;
	//sorting
	for(i=0;i<14;i++)
	{
	for(j=0;j<((14-1)-i);j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}}}
		
		printf("\n\n After the total sorting \n\n");
	for(i=0;i<14;i++)
	{
	printf("%d| ",a[i]);
	}
	
	printf("\nEnter no to be searched:");
	scanf("%d:",&num);
	for(i=0;i<14;i++)
	{
	
	mid=(last+first)/2;
	
	if(num==a[mid])
	{pos=mid+1;
	flag=1;
	break;}
	else if(num>a[mid])
        first=mid+1;
	else if(num<a[mid])
		last=mid-1;
	}
	
	if(flag==1)
	{printf("\nThe no. is found at position %d\n",pos);
	
	}
	else
	{printf("The no. is not found\n");
	}
	
	getch();
}


