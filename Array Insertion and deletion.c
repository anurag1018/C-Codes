/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-29/11/2015
   */
#include <stdio.h>
 int array[100], position,p1, c, s , n, i , j , T , item , value;
int main()
{
   
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter the %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
      system("cls");
      printf("\t\tEnter Your Choice:\n1)Insert (unsorted array).\n2)Delete(Unsorted array)\n");
      printf("3)Insert(Sorted)\n4)Delete(Sorted)\n");
	  scanf("%d",&s);
	  switch (s){
 case 1:
   printf("Enter the location where you wish to insert an element\n");
   scanf("%d", &position);
 
   printf("Enter the value to insert\n");
   scanf("%d", &value);
 
   for (c = n - 1; c >= position - 1; c--)
      array[c+1] = array[c];
 
   array[position-1] = value;
 
   printf("Resultant array is\n");
 
   for (c = 0; c <= n; c++)
      printf("%d\n", array[c]);
      break;


case 2:
 printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
 
   if ( position >= n+1 )
      printf("Deletion not possible.\n");
   else
   {
      for ( c = position - 1 ; c < n - 1 ; c++ )
         array[c] = array[c+1];
 
      printf("Resultant array is\n");
 
      for( c = 0 ; c < n - 1 ; c++ )
         printf("%d\n", array[c]);
         break;
   }
   
   case 3:
   	system("cls");
printf("Sorted array = ");
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1;j++)
{if(array[j]>array[j+1])
{T=array[j];
array[j]=array[j+1];
array[j+1]=T; } }}                               
for(i=0;i<n;i++)
 {
 printf("%d\t",array[i]); }
 
 printf("\nEnter ITEM to be inserted : ");
 scanf("%d", &item);
 i = n-1;
while(item<array[i] && i>=0)
{
	array[i+1]=array[i];
	i--;
}
array[i+1] = item;                                                               
n++;
 printf("\n\nAfter insertion array is :\n");   	
 for(i=0; i<n; i++)
 {
 	printf("\n%d", array[i]);
 }
   	
   	
   	
case 4:   system("cls");
printf("Sorted array = ");
for(i=0;i<n-1;i++)
{ for(j=0;j<n-1;j++)
{if(array[j]>array[j+1])
{T=array[j];
array[j]=array[j+1];
array[j+1]=T; } }}                               
for(i=0;i<n;i++)
 {
 printf("%d\t",array[i]); }


   printf("\n\nEnter the element u wish to delete");
   scanf("%d",&c);
   for(i=0;i<n;i++)
   {if(c==array[i]){
   
    p1=i;
	break;
   }}
    printf("%d",p1);
   
   
   for(i=p1;i<n;i++)
   {
   	array[i]=array[i+1];
   }
   
   printf("\n");
   for(i=0;i<n-1;i++)
   {printf("%d ",array[i]);
   }
   
}
   
   
   
 getch();
   return 0;
   getch();
}
