#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *ptr;
	char s[80];
	
	ptr = fopen("file.txt","r");
	if(ptr == NULL)
	{
		printf("Couldn't open the file.");
		exit(1);
	}
	while(fgets(s,79,ptr) != NULL)
	{
		printf("%s",s);
	}
	fclose(ptr);
}
