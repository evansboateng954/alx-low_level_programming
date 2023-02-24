/*
 * A program to print the size of c data types
 */

#include<stdio.h>
int main()
{
	printf("Size of a char:%ld  byte(s)", sizeof(char));


        printf("Size of an int: %ld  byte(s)", sizeof(int));


	printf("Size of a long int: %ld  byte(s)", sizeof(long int));


	printf("Size of a long : %ld  byte(s)", sizeof(long));


	printf("Size of a float: %ld  byte(s)", sizeof(float));
	return 0;
}
