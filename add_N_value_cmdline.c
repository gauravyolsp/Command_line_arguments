#include <stdio.h>

int main(int argc, char **argv)
{
	int iSum = 0;
	int iCounter;

	if(argc == 1)
	{
		puts("Invalid Arguments");
		return -1;
	}

	for(iCounter = 1; iCounter < argc; iCounter++)
		iSum = iSum + atoi(argv[iCounter]);

	printf("SUM is: %d\n", iSum);
	
	return 0;
}
