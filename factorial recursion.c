#include<stdio.h>
#include<conio.h>
int facto(int);
main()
{
	int a,b;
	printf("Enter a no.\n");
	scanf("%d",&a);
if(a==0)
printf("The factorial of 0 is 1");
else{

b=facto(a);	
printf("The factorial of %d is %d",a,b);
}}

int facto(int n)
{int m;
	
    	if(n==1)
    	return 1;
    	else
    m=facto(n-1)*n;
    	return m;
	
	}

