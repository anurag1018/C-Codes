/* Author-Anurag Goel
   Class-BCA II
   Roll No.-1541011
   Date-9/1/2016
   */
#include<stdio.h>
#include<string.h>
int i,len1,len2;
main(){
	
	char str1[50],str2[50];int c;
	int ch;
	printf("Please Enter String 1:");
	fflush(stdin);
	gets(str1);
	printf("Please Enter String 2:");
	fflush(stdin);
	gets(str2);
	
	length1(str1);
	length2(str2);
	while(1){
		printf("Please select an option\n\n");
	printf("1.Compare\n2.Concatinate\n3.Copy String\n4.Find Length\n5.Exit\n");
	printf("Enter choice here:");
	scanf("%d",&ch);

	switch(ch){
	
	case 1:
	compare(str1,str2);
	
	break;
	case 2:
	concat(str1,str2);
	break;

    case 3:
	printf("\n Choose the string to copy\n");
	printf("1.String 1\n2.String 2\n");
	scanf("%d",&c);
	if(c==1)
	 {
	
     printf("\nString 1 copied\nCopied String is:\n");
     copy(str1);
	 }
	else if(c==2)
	{
	
	 printf("\nString 2 copied\nCopied String is:\n");
	 copy(str2);
    }
    else{printf("Invalid Input.\n");
	}
	
	break;
	case 4:
		printf("\n Choose the string to find length\n");
	printf("1.String 1\n2.String 2\n");
	scanf("%d",&c);
	
	if(c==1)
	 {
	length1(str1);
	printf("The length of string 1 is:%d\n",len1);
     
     
	 }
	else if(c==2)
	{
	
	 	length2(str2);
	printf("The length of string 2 is:%d\n",len2);
    }
	else{printf("Invalid Input.\n");
	break;
	case 5:
	exit(0);
	break;
	
	default:
		printf("\nInvalid Input.Please Try Again\n");
		break;
		
	
	}
   }
}}
   compare(char str1[],char str2[]){
   	i=0;int flag=0;
   	if(len1==len2){
	   
	   while(str1[i]!='\0')
   	{
	   if(str1[i]==str2[i])
   	   {flag=1;
		  }
   		else
   		flag=0;
	   
   i++;
}
   } 
   if(flag==1)
   printf("\n----Strings are Equal----\n");
   else
   printf("\n----Strings are Un-Equal----\n");
}
   
    length1(char str1[]){
    	len1=0;
    	for(i=0;str1[i]!='\0';i++)
    	{
				len1++;
              
	}
	
	}

    length2(char str2[]){
    	len2=0;
    for(i=0;str2[i]!='\0';i++)
	//	while(str2[i]!='\0')
    	{
    		len2++;
    		
		}
	}
	
	concat(char str1[],char str2[])
	{
		char str3[100];
		i=0;
		int j;
		while(str1[i]!='\0')
		{
			str3[i]=str1[i];
		    i++;
		}
		j=i;
		i=0;
		while(str2[i]!='\0')
		{
			str3[j]=str2[i];
			j++;i++;
		}
		i=0;
		printf("\nNew Concatinated String is:\n\n");
		fflush(stdin);
		puts(str3);
		printf("\n");
		
	}
	copy(char str[])
	{char str11[50];
	i=0;
		while(str[i]!='\0')
		{
		str11[i]=str[i];
        i++;	
		} 
		
	puts(str);
}
