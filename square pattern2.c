#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int i,j,k=11,a,x=1,y=10,l=1,m=1;
	
for(a=0;a<=4;a++)
	{


	
	for(i=1+a;i<=10-a;i++)
	{m=1;
		for(j=1+a;j<=10-a;j++)
		{
		
//			for(l=1;l<=10;l++)
//			{
//				for(m=1;m<=10;m++)
//				{
//					if(l==m||(k-m)==l)
//					printf("*");
//				    	
//				}
//			}
			
			if(l==m||(k-m)==l||j==x||j==y||i==x||i==y)
			printf("*");
			else
			printf(" ");
			
			m++; l++; 
		} 
	printf("\n");
	}
	

printf("\n\n");
x++;y--;l=1;

}
}
