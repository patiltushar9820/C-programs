#include<stdio.h>
#include<string.h>
int charcnt(char * str,char ch)
{
	int len=0, i,cnt=0;
	len=strlen(str);
	for ( i = 0; i < len; ++i)
	{
		if (str[i]==ch)
		{
			cnt++;
		}
	}
	return cnt;


}
int main()
{
	int n=0;
	char str[200],ch;
	printf("enter string\n");
	scanf("%[^\n]%c",str,&ch);
	printf("enter charter for counting in string\n");
	scanf("%c",&ch);
	n=charcnt(str,ch);
	printf("character %c is %d times occurs in string %s",ch,n,str);


	return 0;
}
