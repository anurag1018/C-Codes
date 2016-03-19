/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-1/2/2015
   */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define COMPARE(x,y) ((x)>(y)?1:(x)==(y)?0:-1)
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))
#define MAXSIZE 3
#include<process.h>
typedef struct stack
{
	int stk[MAXSIZE];
	int top;
	
}stac;

main(){
	stac s;
	int choice,num,i;
	s.top=-1;
	int ext=1;
while(ext==1){
    system("cls");
	printf("\n\n**********MENU**********\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n\nINPUT:");
         scanf("%d",&choice);
	switch(choice){
    	case 1:
    		printf("Enter no. to push\n");
    		scanf("%d",&num);
    		
    		if(s.top==MAXSIZE-1)
    	{
				printf("\nStack Overflow\n");
				getch();
    		break;
			getch();
			}
    		else
    	{ s.top++;  
		    s.stk[s.top]=num;
    	
				//s.stk[s.top++]=num;
    		break;
    	}
    	case 2:
    		if(s.top==-1)
    		{
			printf("Stack Underflow\n");
			getch();
    		break;
    	}
			else{
    		num=s.stk[s.top];
    		s.top--;
    		break;
    }
    		
    	case 3:
		printf("Resultant stack is:\n");
		for(i=0;i<=s.top;i++)
		printf("%d|",s.stk[i]);
		getch();
		break;
		case 4:
			ext=0;
			printf("\nExiting the program\n");
			getch();
		    exit(0);
			break;
			
		default:printf("Invalid Input");
		getch();	
		     	
	}}}
	
