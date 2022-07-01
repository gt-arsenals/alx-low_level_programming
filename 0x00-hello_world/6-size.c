#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int I;
	long long int II;
	float d;
	char c;

	printf("Size of a char: %lubyte(s)\n", sizeof(c));
	printf("Size of an int: %lubyte(s)\n", sizeof(i));
	printf("Size of a long int: %lubyte(s)\n", sizeof(I));
	printf("Size of a long long int: %lubyte(s)\n", sizeof(II));
	printf("Size of a float: %lubyte(s)\n", sizeof(d));
	return (0);
}
