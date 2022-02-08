#include <unistd.h>
#include "main.h"
/**
 * int _islower - test the character lowercase 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
	{
		if (c >= 97 && c <= 122)
			{
				return(1);
			}
		else
			{
				return(0);
			}
}
