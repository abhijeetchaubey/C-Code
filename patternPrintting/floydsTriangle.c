#include<stdio.h>
#include<string.h>
int main()
{
	int length=0,lmax=0,windex=0,i,j;
	char str[100], word[100];
	printf("Enter a String");
	gets(str);
		for(i=0;str[i]!='\0';i++)
	{
		if(str[i] != ' ')
		{
			length++;
			continue;
		}
		if(length>lmax)
		{
			lmax=length;
			windex=i;
		}
		length=0;
	}
    if(length>lmax)
	{
		lmax=length;
		windex=i;
	}
	j=0;
	for(i=windex-lmax; i<windex; i++,j++)
	{
		word[j]=str[i];
		
	}
	word[j]='\0';
	printf("Longest Word:%s\n", word);
	return 0;
}
