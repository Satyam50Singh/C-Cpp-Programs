#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n;
	char ch;
	char str[100],id[100];
	printf("Enter ID :");
	scanf("%s",id);
	printf("Enter password of max 8 characters :");
	for( i=0; i<8; i++)
	{
		ch=getch();
		str[i]=ch;
		ch='*';
		printf("%c",ch);
	}
	str[i]='\0';
	printf("\n\nEntered Password :");
	for(i=0; str[i]!='\0'; i++)
	printf("%c",str[i]);
}
