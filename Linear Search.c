/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-22/12/2015
   */
#include<stdio.h>
#define MAXSIZE 50
int main(){
	int i,arr[MAXSIZE],num,len,flag=0;
		printf("Enter number of elements in the array\n");
		scanf("%d",&len);
	printf("Enter elements in the array\n");
	for(i=0;i<len;i++)
	scanf("%d",&arr[i]);
	
	printf("Enter element to search:");
	scanf("%d",&num);
	
	for(i=0;i<=len;i++)
	if(arr[i]==num){
		printf("The number %d is found at index no. %d",num,i);
		flag=1;
		break;
		}
	
if(flag==0)
printf("The number is not found\n");
}
