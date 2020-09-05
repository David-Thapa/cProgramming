#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char s[50];
	
	ptr = fopen("file.txt","w");
	if(ptr == NULL)
	{
		printf("File couldn't be opened'");
		exit(1);
	}
	printf("\nEnter the text:\n");
	while(strlen(gets(s))>0)
	{
		fputs(s,ptr);
		fputs("\n",ptr);
	}
	fclose(ptr);
}
