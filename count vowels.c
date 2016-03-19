#include<stdio.h>
#include<conio.h>
main()
{int len;
	char str[100];
	int k,a=0,e=0,i=0,o=0,u=0,c=0;
printf("Enter a string\n");
gets(str);
len=strlen(str);
printf("Length of the string is %d\n",len);
for(k=0;k<len;k++)
{
	if(str[k]=='a'||str[k]=='A')
			a++,c++;
			if(str[k]=='e'||str[k]=='E')
			e++,c++;
			if(str[k]=='i'||str[k]=='I')
			i++,c++;
			if(str[k]=='o'||str[k]=='O')
			o++,c++;
	if(str[k]=='u'||str[k]=='U')
			u++,c++;
}
printf("The count of vowels in the string are as follows:\n");
printf("a=%d\n",a);
printf("e=%d\n",e);
printf("i=%d\n",i);
printf("o=%d\n",o);
printf("u=%d\n",u);
printf("Total no. of vowels= %d",c);
}
