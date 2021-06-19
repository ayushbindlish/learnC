// Pointer Basics

#include<stdio.h>

int main(int argc, char* argv[]) {
	// create two arrays we care about
	int ages[] = {23,43,12,89,2};
	char *names[] = {"Alan","Frank", "Mary", "John", "Lisa" };

	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	// first way by using indices
	// using i to index the arrays
	for(i=0;i<count;i++) {
		printf("%s is %d years old\n",names[i],ages[i]);

	}

	printf("---\n");


	// setup the pointers to the start of the arrays
	// pointer type is same as the type above in this case
	int *current_age = ages;
	// creating pointer of pointer using **
	char **current_name = names;

	// second way using pointers
	for(i=0;i<count;i++) {
		printf("%s has %d years alive\n",*(current_name+1),*(current_age+1));
	}

	printf("---\n");


	// third way, pointers are just arrays
	for(i=0;i<count;i++) {
		printf("%s is %d years old again\n",current_name[i],current_age[i]);

	}
	printf("---\n");

	// fourth way with pointers in a stupid complex way
	for(current_name=names,current_age=ages;(current_age-ages)<count;current_name++,current_age++) {
printf("%s lived %d years so far.\n",*current_name, *current_age);
}
	
return 0;
}
