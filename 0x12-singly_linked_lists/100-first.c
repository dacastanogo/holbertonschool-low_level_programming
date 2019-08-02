#include <stdio.h>
#include "lists.h"

void _printbeforemain(void) __attribute__ ((constructor));

/**
 * _printbeforemain - executes before main()
 *
 * Return: void
 */
void _printbeforemain(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
