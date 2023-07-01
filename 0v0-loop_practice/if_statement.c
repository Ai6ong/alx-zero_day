#include <stdio.h>

/**
 * main - if statement practs.
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int age;

	printf("Please Enter Your age:\n");
	scanf("%i", &age);

	if (age > 18)
	{
		printf("you are good to go. seat Num.46\n");
	}
	if (age < 18)
	{
		printf("Hey you are to young to be here, Go Home!\n");
	}
	return (0);
}
