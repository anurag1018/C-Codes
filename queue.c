/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-5/12/2015
   */
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
main()
{
	int queue[MAXSIZE];
	int front=-1,rear=-1;
	int i,ch,num;
label:
	system("cls");
	printf("\n********MENU********\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\n\nCHOICE:");
	scanf("%d",&ch);
	switch(ch){
		case 1:if(rear==MAXSIZE-1)
		{
			printf("\nQueue Overflow\n");
			getch();
			
	    }
	     else{
	     	printf("\nEnter number to insert\n");
	     	scanf("%d",&num);
	         rear++;
			 queue[rear]=num;
			 if(front==-1)
			 front=0;
			 	printf("\n\t\tInserted!\n");
		 }
		 getch();
			break;
		case 2:
			if(front==-1||front>rear){
			
			printf("\nQueue Underflow\n");
			getch();
		}
			else
			{
				front++;
				printf("\n\t\tDeleted!\n");
			}
	        getch();
	        break;
		case 3:if(front==-1||front>rear)
		printf("\nQueue is empty\n");
		 
		else{
		printf("\nResultant Queue:\n");
		for(i=front;i<=rear;i++)
		printf("%d|",queue[i]);}
		getch();
		break;
		 
		case 4:
		printf("Exiting....");
		getch();
		exit(0);
		 break;
	   
	    default:printf("Invalid Input");
	    break;
	} 
	goto label;
	
	
	}
	
	
	

