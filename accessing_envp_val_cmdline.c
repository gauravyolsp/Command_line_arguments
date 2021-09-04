#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
	int iCounter;
	
	for(iCounter = 0; envp[iCounter] != NULL; iCounter++)
		puts(envp[iCounter]);

	envp[2] = "GAURAV";
		puts(envp[2]);
	printf("\n\niCounter = %d\n", iCounter);
	return 0; 
}
