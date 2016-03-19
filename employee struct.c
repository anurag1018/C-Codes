#include<stdio.h>
typedef struct employee{
	int id;int long ph;
	char name[20];
	float salary; 
}emp;
void main()
{
emp e[20];
int i,num;
int *p;
printf("Enter the number of employees\n");
scanf("%d",&num);
printf("Enter the ids of  the employees\n ");
for (i=0;i<num;i++){

printf("Employee No. %d\n",i+1);
scanf("%d",&e[i].id);}
//p=&e[0].id;
printf("Enter the phone no. of  the employees\n ");

for (i=0;i<num;i++){

printf("Employee No. %d\n",i+1);
scanf("%d",&e[i].ph);
}
printf("Enter the names of  the employees\n ");
for (i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
scanf("%s",&e[i].name);
}
printf("Enter the salary of  the employees\n ");
for (i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
scanf("%f",&e[i].salary);
}
printf("THE DETAILS HAVE BEEN SUCCESSFULLY REGISTERED\n");
printf("\nPress any key to view the details\n\n\n");
getch();
printf("---------------------------------------------------------\n");
printf("The Details of the employees are:\n");
printf("---------------------------------------------------------\n");

for(i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
printf("Id :%d\n",e[i].id);
}//printf("%d",*p);

for(i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
printf("Phone No:%d\n",e[i].ph);
}
for(i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
printf("name:%s\n",e[i].name);
}
for(i=0;i<num;i++)
{
printf("Employee No. %d\n",i+1);
printf("Salary:%f\n",e[i].salary);

printf("---------------------------------------------------------\n");
}
}


