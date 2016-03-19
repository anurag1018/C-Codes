#include <stdio.h>
#include <conio.h>
main()
{
	char str[100],str2[100];
	
	gets(str);
	strcpy(str2,str);
	strrev(str2);
	if(strcmp(str,str2)==0)
	printf("It is a pallindrome string");
	else
	printf("It is NOT a pallindrome string");
	
}
