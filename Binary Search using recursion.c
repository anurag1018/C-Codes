/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-19/12/2015
   */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#define COMPARE(x,y)((x)>(y)?1:(x)==(y)?0:-1)

main(){
	int list[]={11,22,333,4444,5555,6666};
	int search_num=4444;
	int first=0;
	 int last=5;
int result= bincur(list,search_num,first,last);
printf("The No. is found at position %d",result+1);	
getch();
}

bincur(int list[],int search_num,int first,int last)
{ int check;
int	middle=(first+last)/2;
	check=COMPARE(search_num,list[middle]);
	if(check==0)
	return middle;
	else if(check==1)
	bincur(list,search_num,middle+1,last);
	else
		bincur(list,search_num,first,middle-1);
		
			
}

