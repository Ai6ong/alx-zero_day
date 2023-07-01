#include <stdio.h>

/**
 * main - else_if statement.
 *
 * Return 0 (Successful);
 */
int main(void)
{
	int age;

	printf("Please Enter Your Age:\n");
	scanf("%i", &age);

	if (age < 17)
	{
		printf("you are a minor, you dont belong here.\n");
	}
	else if (age < 18)
	{
		printf("oops Comeback Next Year.\n");
	}
	else 
	{
		printf("Sharp! Your Are Welcome. Your Seat No.46\n");
	}
	return (0);
}
