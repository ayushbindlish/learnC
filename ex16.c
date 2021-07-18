// Exercise 16: Structs and Pointers to Them


// Header files
//++++++++++++++++++++++++++++++++

// standard library functions for file input and output
#include<stdio.h>

//Provides a macro called assert; can be ued to verify assumptions made by the program
//and print a diagnostic message if assuption is false
#include<assert.h>

//The stdlib.h header defines four variable types, several macros, and various functions
//for performing general functions. Here being used for macro NULL
#include<stdlib.h>

//The string.h header defines one variable type, one macro, and various functions for 
//manipulating arrays of characters.
#include<string.h>

//++++++++++++++++++++++++++++++++


// Creating a structure that has 4 elements to describe a person.
struct Person{
	char *name;
	int age;
	int height;
	int weight;	
};



/ Function Person_create
struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct  Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destroy(struct Person *who)
{
assert(who != NULL);

free(who->name);
free(who);
}

 void Person_print(struct Person *who)
 {
 printf("Name: %s\n", who->name);
 printf("\tAge: %d\n", who->age);
 printf("\tHeight: %d\n", who->height);
 printf("\tWeight: %d\n", who->weight);
 }




 int main(int argc, char *argv[])
 {
 // make two people structures
 struct Person *joe = Person_create(
 "Joe Alex", 32, 64, 140);
 struct Person *frank = Person_create(
 "Frank Blank", 20, 72, 180);
 // print them out and where they are in memory
 printf("Joe is at memory location %p:\n", joe);
 Person_print(joe);
 printf("Frank is at memory location %p:\n", frank);
 Person_print(frank);
 // make everyone age 20 years and print them again
 joe->age += 20;
 joe->height -= 2;
 joe->weight += 40;
 Person_print(joe);
 frank->age += 20;
 frank->weight += 20;
 Person_print(frank);
 // destroy them both so we clean up
 Person_destroy(joe);
 Person_destroy(frank);
 return 0;
 }

