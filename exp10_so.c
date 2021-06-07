#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;

	printf("This is argc: %d\n",argc);
	printf("This is argv[argc]: %s\n",argv[argc]);

	printf("This is argv[0]: %s\n",argv[0]);
	for(i=argc;i<100;i++)
	printf("This is argv[%d]: %c\n",i,argv[i]);

	for(i=1;i<argc;i++)
	{
		printf("arg %d: %s\n",i,argv[i]);
	}

	return 0;

}
