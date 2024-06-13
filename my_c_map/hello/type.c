#include<stdio.h>

int main()
{
	char str[]={"hello.world.!"};
        
	for(int i=0;str[i]!= '\0'; i++)
	{
		if(str[i]=='o')

	{
		printf("%c",str[i]);
	}
	}
	printf("\n");


	return 0;
}

