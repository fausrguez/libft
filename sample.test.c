#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[50];
	char str2[50];

	strcpy(str,"La madre que ");
	strcpy(str2,"te pario");
	printf("Result %s\n", strcat(str2, str));

	printf("The end");
}
