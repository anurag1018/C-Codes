#include <stdio.h>
main()
{
	int l1,l2;
	int i;
	int k;
	int c;
	printf("Enter the lower and upper limits");
	scanf("%d",&l1);
	scanf("%d",&l2);
	for(i=l1;i<=l2;i++)
	{	c=0;
	for(k=1;k<=i;k++)
	{

		if(i%k==0){
		
		c++;
	}
		
	}
	if(c==2)
	{
	
		printf("%d,",i);
    }
	}
}
