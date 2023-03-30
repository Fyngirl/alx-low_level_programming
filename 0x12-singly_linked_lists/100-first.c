#include <stdio.h>
/**
 * startupfun - prints a message before the main function
 *
 */
void startupfun(void) __attribute__((constructor));

/**
 * startupfun - implementation of the startup function
 */
void startupfun(void)
{
	printf("You're beat! and yet, you allow,\n");
	printf("I bore my house upon my back!\n");
}
