#include <stdio.h>

int main(int argc, char *argv[])
{
	int iCounter;

	printf("Command line arguments are:\n");

	for(iCounter = 0; iCounter < argc; iCounter++)
		puts(argv[iCounter]);

	return 0;
}
