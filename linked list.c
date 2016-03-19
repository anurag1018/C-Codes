/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-15/12/2015
   */
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int val;
    struct node *next;
}node_t;

main(){
	node_t* current;
	
node_t *head=NULL;
head = (node_t*)malloc(sizeof(node_t));
//check for isEmpty
if (head == NULL) {
    return 1;
}

head->val = 1;
head->next = NULL;
head->next = (node_t*)malloc(sizeof(node_t));
head->next->val = 2;
head->next->next = NULL;




//printing list
current=head;

while(current!=NULL){

printf("%d,",current->val);
current=current->next;
}
printf("\n");


//Adding element to end of list

current=head;
while(current->next!=NULL)
{
	current=current->next;
}
current->next=(node_t*)malloc(sizeof(node_t));
current->next->val=3;
current->next->next=NULL;

//printing list
current=head;

while(current!=NULL){

printf("%d,",current->val);
current=current->next;
}
printf("\n");

//Adding element to beginning of the list
node_t* beg_node=NULL;
beg_node=(node_t*)malloc(sizeof(node_t));
node_t* beg_temp=NULL;
beg_temp=(node_t*)malloc(sizeof(node_t));
beg_node->val=0;
beg_node->next=head;
beg_temp=head;
head=beg_node;
beg_node=beg_temp;
head->next=beg_node;

//printing list
current=head;

while(current!=NULL){

printf("%d,",current->val);
current=current->next;
}
printf("\n");

//Removing last element from the list
current=head;
while(current->next->next!=NULL)
{
current=current->next;
}
node_t* del_temp=NULL;
del_temp=(node_t*)malloc(sizeof(node_t));
del_temp=current->next;
free(del_temp);
current->next=NULL;


//printing list
current=head;

while(current!=NULL){

printf("%d,",current->val);
current=current->next;
}
printf("\n");

//Removing first element from the list
current=head;
head=head->next;
free(current);

//printing list
current=head;

while(current!=NULL){

printf("%d,",current->val);
current=current->next;
}
printf("\n");

//Searching
int flag=0,pos=1;

int search_no=2;
current=head;
while(current!=NULL)
{

if(current->val==search_no)
{
flag=1;
break;
}
current=current->next;
pos++;
}

if(flag==1)
{
	printf("Number is found at node %d\n",pos);
}
else
printf("Node is not found\n");




}//main end



