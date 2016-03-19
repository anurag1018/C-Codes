
/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-29/9/2015
   */

#include<stdio.h>
#include<conio.h>
main(){
	int n=5,i,j;
	

//1
for(i=1;i<=n;i++)
{
	printf("*");
}
printf("\n\n");
//2

for(i=1;i<=n;i++)
{
	printf("*");
	printf("\n");
}
printf("\n\n");
//3
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	
	printf("*");
	}
	printf("\n");
}
printf("\n\n");

//4
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if((i==1)||(i==n)||(j==1)||(j==n))
	{

	printf("*");
	}
	else{
		printf(" ");
	}
	}
	printf("\n");
}
printf("\n\n");

//5
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	
	printf(" ");
	
	}
	printf("*");
	printf("\n");
}
printf("\n\n");

//6


for(i= 1; i<=n; i++) 
{ 
  for(j=1; j<=n; j++) 
  { 
     if(j==i || i==(n-j+1)) putchar('*'); 
     else putchar(' '); 
  } 
      putchar('\n');
}  
      printf("\n\n");

//7
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(j==1||j==n||i==n)
		putchar('*');
		else
		putchar(' ');
	}
	printf("\n");
}
printf("\n\n");

//8
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		if(i==1||i==n||j==1)
	    putchar('*');
		
		if(((n%2)==0)&&(i==(n/2)))
		putchar('*');
		
		if(((n%2)!=0)&&(i==((n/2)+1)))
		putchar('*');
		
		else putchar(' ');
		
		
	}
	printf("\n");
}
printf("\n\n");

//9

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
		
		
		/*if(((n%2)==0)&&(i==(n/2)))
		putchar('*');
		
		if(((n%2)!=0)&&(i==((n/2)+1)))
		putchar('*');
		
		if(((n%2)==0)&&(j==(n/2)))
		putchar('*');
		
		if(((n%2)!=0)&&(j==((n/2)+1)))
		putchar('*');
		
		 if(((n%2)==0)&&(i==(n/2))||j==(n/2))
		putchar('*');*/
		
		 if((i==((n/2)+1))||j==((n/2)+1))
		putchar('*');
		
		
		else putchar(' ');
		
		
	}
	printf("\n");
}
printf("\n\n");

//10



for(i=1;i<=n;i++)
{
	for(j=1;j<=n*2;j++)
	{
	 
		if(i==j||n*2==i+j)
		putchar('*');
	
	    else putchar(' ');
	}
	printf("\n");
}

printf("\n\n");
getch();

}

