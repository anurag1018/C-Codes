#include<stdio.h>
#include<conio.h>
#include<math.h>
void quadRoot(float,float,float);

void main()
{
float x,y,z;
printf("In the given equation ax²+bx+c\nEnter a, b and c\n");
printf("a = ");
scanf("%f",&x);
printf("b = ");
scanf("%f",&y);
printf("c = ");
scanf("%f",&z);	
quadRoot(x,y,z);


}
void quadRoot(float a,float b,float c)
{
float x1,x2,D;
	D=(b*b)-(4*a*c);
	if(D<0)
	{
	printf("\n This equation has imaginary roots\n");
	}
	else if(D==0||D>0)
	{
	
	x1=(-b+sqrt(D))/(2*a);
	x2=(-b-sqrt(D))/(2*a);
}

if(D>0)
{
printf("\nThe roots are real and distinct and they are: %f and %f",x1,x2);
}

if (D==0)
{
	printf("\n The roots are real and equal and it is %f",x1);
}
getch();
}
