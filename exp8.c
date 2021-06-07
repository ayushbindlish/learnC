#include<stdio.h>

	char full_name[] = {
		'A','y','u','s','h',' ',
		'B','i','n','d','l','i','s','h', '\0'
	};
int main(int argc, char* argv[])
{
	int areas[] = {10,12,13,14,20};
	char name[] = "Ayush";
	
	/*
	 * WARNING: On some systems you may have to change the 
	 * %ld in this code to %u since it will use unsigned ints
	*/

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int areas[]): %ld\n",sizeof(areas));
	printf("The number of ints in areas: %ld\n",sizeof(areas)/sizeof(int));
	printf("The first area is %d and the second area is %d\n",areas[10],areas[1]);

	printf("The size of a char: %ld\n",sizeof(char));
	printf("The size of name (char[] is %ld\n)",sizeof(name));
	printf("The number of chars in name: %ld\n",sizeof(name)/sizeof(char));

	printf("The size of full_name(char[]): %ld\n",sizeof(full_name));
	printf("The number of chars in full_name: %ld\n",sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n",name,full_name);
	areas[0] = name[0];
	printf("%d, %c\n",areas[0],areas[0]);

	name[0] = 100;
//	printf("%d, %c, %s\n",name[0],name[0],name[0]);

return 0;



}
