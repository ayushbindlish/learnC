#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// why am i skipping argv[0]?
	printf("This is argc: %d\n",argc);
	printf("This is argv[argc]: %s\n",argv[argc]);

	printf("This is argv[0]: %s\n",argv[0]);
	
	for(i=argc;i<100;i++)
	printf("This is argv[%d]: %s\n",i,argv[i]);
	for(i=1;i<argc;i++)
	{
		printf("arg %d: %s\n",i,argv[i]);
	}

	// let's make our own array of strings
	char *states[] = 
	{
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 45;

	for(i=0;i<num_states;i++)
	{
		printf("state %d: %s\n",i,states[i]);
	}

	return 0;

}
