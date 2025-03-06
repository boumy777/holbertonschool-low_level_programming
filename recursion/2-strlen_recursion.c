#include <stdio.h>
#include <string.h>  /* Include string.h for strlen*/

int main(void)
{
	char str[] = "Hello";
	printf("Length of '%s' is %lu\n", str, strlen(str));
	return (0);
}
