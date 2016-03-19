#include <stdio.h>
#include <conio.h>

main()
{
	char ch;
	int a,b;
	double result;
	int temp;
	
	printf("Enter two numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Enter the respective character,to perform the specified functions:\n");

	printf("+:Addition\n-:Substraction\n/:Division\n*:Multiplication\n");
fflush(stdin);
//	  do {
  //  printf("Your choice: ");
    ch = getchar();
  //} while(ch!='a' && ch!='b' && ch!='c' && ch!='d');
	
	switch(ch)
	{
		case'+':result=a+b;
		break;
		case'-':result=a-b;
		break;
		case'/':
		if(b>a)
		{
			temp=b;
			b=a;
			a=temp;
		}
		if(b==0)
		{printf("It is not possible to divide a number by zero\n");
	printf("Kindly provide another value as the divisor:\n");
	scanf("%d",&b);	}
		result=a/b;
		break;
		case'*':result=a*b;
		break;
		default:printf("Invalid Input");
		
	}
	printf("%f",result);
getch();
}
