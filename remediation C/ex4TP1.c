#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
	int N = 0;
	int C = 0;
	int total = 0;
	
	while(N < 1)
	{
		printf("Entrez le nombre de notes :\n");
		scanf("%d", &N);
	}
	
	while(C < N)
	{
		total++;
		printf("%d\n", total);
		C++;
	}
}

