/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-29/11/2015
   */
#include<stdio.h>
 void printNumber1to10(int );
 void printNumber10to1(int );
 void printFibonacci(int);
 int binsearch(int[], int, int, int);
 void towers(int, char, char, char);
 int fact (int);
 void main() {int k,n,num;
  int  key, position;
   int low, high, list[100];
long int i=0,j=1,f;
printNumber1to10(1);
printf("\n\n");
printNumber10to1(10);
printf("\n\n");
printf("Enter the number to find factorial of:");
scanf("%d",&n);
printf("The factorial is %d",fact(n));
printf("\n\nEnter the max. range of the Fibonacci series: ");   
scanf("%d",&n);
printf("Fibonacci Series: ");
printf("%d %d ",0,1);
n=n-2;
printFibonacci(n);
printf("\n\n");
printf("TOWER OF HANOI\n");
printf("Enter the number of disks : ");
scanf("%d", &num);
printf("The sequence of moves involved in the Tower of Hanoi are :\n");
towers(num, 'A', 'C', 'B');


printf("\n\n");
printf("BINARY SEARCH RECURSION\n");
 printf("\nEnter the total number of elements:");
   scanf("%d", &num);
 
   printf("\nEnter the elements of array :");
   for (i = 0; i < num; i++) {
      scanf("%d", &list[i]);
   }
 
   low = 0;
   high = num - 1;
 
   printf("\nEnter element to be searched : ");
   scanf("%d", &key);
 
   position = binsearch(list, key, low, high);
 
   if (position != -1) {
      printf("\nNumber present at %d", (position + 1));
   } else
      printf("\n The number is not present in the list");

getch();
}
 
 //1 to 10
void printNumber1to10(int val) {
   int i;
   printf("%d\n", val);
   i = val + 1;
 
 
   if (i > 10)
      return;
   printNumber1to10(i);
}
 

//10 to 1
void printNumber10to1(int val) {
   int i;
   printf("%d\n", val);
   i = val - 1;
 
   if (i < 1)
      return;
   printNumber10to1(i);
}


int fact (int n)
{
    if (n==1)
    return 1;
    else 
    return(n*fact(n-1));
}

void printFibonacci(int n){

    static  int first=0,second=1,sum;

    if(n>0){
         sum = first + second;
         first = second;
         second = sum;
         printf("%ld ",sum);
         printFibonacci(n-1);
    }

}

void towers(int num, char ft, char tt, char at)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from tower %c to tower %c", ft, tt);
        return;
    }
    towers(num - 1, ft, at, tt);
    printf("\n Move disk %d from tower %c to tower %c", num, ft, tt);
    towers(num - 1, at, tt, ft);
}





int binsearch(int a[], int x, int low, int high) {
   int mid;
 
   if (low > high)
      return -1;
 
   mid = (low + high) / 2;
 
   if (x == a[mid]) {
      return (mid);
   } else if (x < a[mid]) {
      binsearch(a, x, low, mid - 1);
   } else {
      binsearch(a, x, mid + 1, high);
   }
}


