#include<stdio.h>
#include<string.h>

int main()
{
	int choice,i;
	do
	{
		char str1[100],str2[100],len1,len2,str[100],originalstr,sub[100];
		printf("Main Menu: \n");
		printf("\t1.Equaility\n");
		printf("\t2.String copy\n");
		printf("\t3.Concat\n");
		printf("\t4.show\n");
		printf("\t5.Reverse\n");
		printf("\t6.Pelindrome\n");
		printf("\t7.Sub String\n");
		printf("\t8.Exit\n");
		
		printf("Please Enter your Choice :");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nPlease enter your first string :");
				scanf("%s",&str1);
				printf("\nPlease enter your second string :");
				scanf("%s",&str1);
				if(strcmp(str1,str2)==0)
				{
					printf("the strings are Equal.\n");
				}
				else
				{
					printf("the strings are not equal.\n");
				}
				break;
				
		    case 2:
		    	printf("\nPlease enter string  to copy :\n");
				scanf("%s",&str1);
				strcpy(str2,str1);
				printf("string 1 is : %s\n ",str1);
				printf("copied string is : %s\n",str2);
				break;
			
			case 3:
				printf("\nPlease enter your first string :\n");
				scanf("%s",&str1);
				printf("\nPlease enter your second string :");
				scanf("%s",&str2);
				len1=strlen(str1);
				len2=strlen(str2);
				
				if(len1+len2< sizeof(str1))
				{
					strcat(str1,str2);
					printf("concatenated string: %s\n",str1);
				}
				else
				{
					printf("concatenation would exceed buffer size.\n");
					
				}
				break;
				
			case 4:
				printf("\nPlease enter the string :\n");
				scanf("%s",&str);
				printf("--The String you entered is %s\n :",str);
				break ;
				
			case 5:
				printf("\nPlease enter string :\n");
				scanf("%s",&str);
				strrev(str);
				printf("--The string after reversing is : %s",str);
				break;
				
			case 6:
				printf("\nPlease enter the string :\n");
				scanf("%s",&str);
				originalstr=str;
				printf("%s",strrev(str));
				
				if(str==originalstr)
				{
					printf("\n Pelindrome");
					
				}
				else
				{
					printf("\n Not pelindrome");
				   	
				}
				break;
				
			case 7:
				printf("\nPlease enter the string :\n");
				scanf("%s",&str);
				printf("\nenter sub string to search :");
				scanf("%s",&sub);
				
				
			default:
				{
				
				printf("Invalid choice please enter choice from menu.");
				break;
			    }
			printf("\n Do you want to continue < press1 to continue.>");
			scanf("%d",&choice);
	
		
		}	 
	}
	while (choice==1);
	 
	return 0;
	
}
