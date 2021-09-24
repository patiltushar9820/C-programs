#include<stdio.h>
#include<string.h>
int remstr(char * str,char remchar)
{
	int len=0,i,j;
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]==remchar)
			{
				for(j=i;j<len;j++){
					str[j]=str[j+1];
				}
				len--;
				i--;
			}
	}


}
void main(){
	char str[200],ch;
	printf("enter a string\n");
	scanf("%[^\n]%c",str,&ch);
	printf("enter charcater to be remove\n");
	scanf("%c",&ch);
	remstr(str,ch);
	printf("after removing string is %c string is %s",ch,str);

}
