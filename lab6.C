/* David Bonilla Amador
CSC 251
Lab 6
2-10-2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
	int x = 0;
	int y = 0;
	//printf("Enter a seed \n");
	//scanf("%d", &y);
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
		printf("x=%d  \n", x+50);
		x= rand()%31;
	}
	
	return EXIT_SUCCESS;
}
