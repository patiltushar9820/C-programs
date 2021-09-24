#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,j,temp,len,len1;
	printf("enter first string\n");
	gets(str1);
	printf("enter second string\n");
	gets(str2);
	len=strlen(str1);
	len1=strlen(str2);
	if (len!=len1)
		{
			printf("String are not anagram\n");
		}	
	
			for(i=0;i<len-1;i++){
				for (j= i+1; j < len; ++j)
				{
					if (str1[i]>str1[j])
					{
						temp=str1[i];
						str1[i]=str1[j];
						str1[j]=temp;
					}
					if (str2[i]>str2[j])
					{
						temp=str2[i];
						str2[i]=str2[j];
						str2[j]=temp;
					}
				}
			}
	
		for ( i = 0; i < len; ++i)
		{
			if (str1[i]!=str2[i])
			{
				printf("String are not anagram\n");
			}
			
		}
	printf("strings are anagram \n");
	return 0;
}
