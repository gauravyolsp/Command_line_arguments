#include <stdio.h>

int main(int argc, char **argv)
{
	int iSum;

	if(argc != 3)
	{
		printf("Invalid arguments\n");
		return -1;
	}

	iSum = atoi(argv[1]) + atoi(argv[2]);

	printf("Sum is : %d\n", iSum);

	return 0;
}
