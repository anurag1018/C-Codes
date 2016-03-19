#include<stdio.h>

int main()
{
int n,maskbit,k,l,i,a;

printf("Enter any positive number\n");
scanf("%d",&n);


printf("\nThe number in decimal:-=%d",n);
printf("\nThe number in octal:-=%o",n);
printf("\nThe number in heaxa decimal=%x\n",n);
printf("The no. in binary is=");
for(i=sizeof(int)*8-1; i>=0;i--)
{
maskbit=1<<i;
k=n&maskbit;
if(k==0)
printf("0");
else
printf("1");
}
printf("\nCompliment of the no.=%d",-(n+1));
l=(n+1);

printf("\nNumber in decimal=%d",l);
printf("\nNumber in octal=%o",l);
printf("\nNumber in Hexa decimal= %x\n",l);
printf("The no. in binary is=");

for(i=sizeof(int)*8-1;i>0;i--)
{
maskbit=1<<i;
k= n& maskbit;
if(k==0)
printf("0");
else
printf("1");                                                           }
printf("\nENTER ANY NUMBER TO KNOWN WHETHER IT IS A EVEN OR ODD\n ");
scanf("%d",&a);

if(a & 1 == 1)
{
printf("The number is odd");
}
else
{
printf("The number is even");
}

getch();
return 0;
}
	                                        
    
