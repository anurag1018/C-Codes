/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-28/2/2015
   */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

main(){
int i;char str[100];
char strsub[100];int ch;int f1,f2,flag,j;
while(1){
printf("Please enter a string:\n");
fflush(stdin);
gets(str);
printf("The inputted string is:\n");
puts(str);
label:
printf("------------------------------\nTo confirm press 1\nTo enter string again press 2\n------------------------------\n");
scanf("%d",&ch);
if(ch==1)
break;
else if(ch!=2){
printf("Wrong input Please try again\n");
goto label;
}
}
label2:
printf("**** MENU ****\n1.Find the index location a sub-string \n2.Display the sub-string b/w two index locations\n3.Exit Application\n");
scanf("%d",&ch);
switch(ch){
	case 1:
    printf("\n----Find the index location a sub-string---\n\n");
    printf("Enter the substring:\n");
    fflush(stdin);
	gets(strsub);
	printf("The inputted sub-string is:\n");
puts(strsub);
while(1){

printf("------------------------------\nTo confirm press 1\nTo enter substring again press 2\n------------------------------\n");
scanf("%d",&ch);
if(ch==1)
break;
else if(ch!=2){ 
printf("Wrong input Please try again\n");
}}
     i=0;
    	for(j=0;j<strlen(str);j++){
    		if(str[j]==strsub[i])
    		{
			if(i==0)
			f1=j;
			
			
			flag=1;
    		
    		if(i==(strlen(strsub)-1))
    		{f2=j;
			break;
						}
			i++;
			continue;
			}
    		flag=0;
		   if(i!=0)
		   i=0;
		}
		if(flag==0)
		{printf("The substring is not found\n");
		}
		else
		printf("The substring is found from index %d to %d\n",f1,f2);
	
	
	break;
	case 2:
	printf("\n----Display the sub-string b/w two index locations----\n\n");
	printf("Enter the starting index number:");
	scanf("%d",&f1);
	printf("Enter the ending index number:");
	scanf("%d",&f2);	
	printf("The substring between %d and %d is:\n",f1,f2);
	for(i=f1;i<=f2;i++)
	{
		printf("%c",str[i]);
	}
	getch();
	
	case 3:
		exit(0);
	break;
	default:("Invalid Input Please try again\n");break;
	goto label2;
}



	
	
}
