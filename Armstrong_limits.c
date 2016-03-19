#include <stdio.h>
#include <conio.h>
 
 main()
 {
 int l1,l2,i,n,k,cub_dig,sum_cub=0;
 	printf("enter the limits");
 	scanf("%d",&l1);
 	scanf("%d",&l2);
 for(i=l1;i<=l2;i++)
 {
 n=i;
 	while(n!=0)
{
	  	k=n%10;
 	cub_dig=k*k*k;
 	sum_cub=sum_cub+cub_dig;
 	n=n/10;
	 }	
	 if(sum_cub==i){
	 
printf("%d,",i);
 }
}
getch();
}
