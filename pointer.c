#include<stdio.h>

int main(int argc, char* argv[]) {
	// Declaring an int
	int a = 5678;

	// Declaring a null pointer
	int* null_ptr = NULL;

	// Assigning an address to a pointer
	int *ptr1 = &a;
	
	printf("%p\n",ptr1);

	// Dereferencing pointer variable aka getting value stored in a pointer
	// using * indirection operator
	printf("%d\n",*ptr1);



	//pointer to pointer
	int *pa = &a;
	int **ppa = &pa;

	printf("value of **ppa = value of *pa = value of a = %d\n",**ppa);


	//pointer to an array
	int arr1[5] = {1,3,5,7,9};
	printf("%d",*(arr1+1));

	// ++++++++++++++++++++++++++++ //
	// using sizeof() with pointers
	
	int var1 = 23;

	//int *ptr2 = &var1;
	int *ptr2 = NULL;
	printf("sizeof var1 = %ld\n", sizeof(var1));
	printf("sizeof ptr2 = %ld\n", sizeof(ptr2));
	printf("sizeof *ptr2 = %ld\n", sizeof(*ptr2));
	printf("value of *ptr2 = %d\n", *ptr2);


	return 0;

}
