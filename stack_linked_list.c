/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-06/02/2015
   */
#include<stdio.h>
#include<stdlib.h>
typedef struct strct{
	int info;
	struct strct* next;
    
}node;

main(){
	node *temp;
	node *stack=(node*)malloc(sizeof(node));
	node *current=(node*)malloc(sizeof(node));
	stack=NULL;
	
		int ext=1,choice,data;
while(ext==1){
    system("cls");
	printf("\n\n**********MENU**********\n1.PUSH\n2.POP\n3.DISPLAY\n4.Exit\n\nINPUT:");
         scanf("%d",&choice);
	switch(choice){
		
    	case 1:
    		printf("Enter value to be pushed:");
    		scanf("%d",&data);
    		
	if (stack == NULL)
    {
        stack =( node *)malloc(1*sizeof(node));
        stack->next = NULL;
        stack->info = data;
    }
    else
    {
        temp =(node *)malloc(1*sizeof(node));
        temp->next = stack;
        temp->info = data;
        stack = temp;
    }
			
		
		break;
    	case 2:
     current = stack;
 
    if (current == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        getch();
    }
    else
       {
		 current = current->next;
    printf("\n Popped value : %d", stack->info);
    getch();
    free(stack);
    stack = current;
    
      }
		
    		break;
    	case 3:
    		
	current = stack;
 
    if (current == NULL)
    {
        printf("Stack is empty");
        getch();
    }
 else{
 
    while (current != NULL)
    {
        printf("%d ", current->info);
        current = current->next;
    }
	getch();
	}
	break;
		case 4:
			ext=0;
			printf("\nExiting the program\n");
			getch();
		    exit(0);
			break;
			
		default:printf("Invalid Input");
		getch();	
		     	

}
}
}


