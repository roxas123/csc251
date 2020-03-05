/*David Bonilla Amador
 * CSC-251
 * 3/4/20
 */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 30
#include <math.h>
void printer (int rname[SIZE]);
void fillEven(int rname [SIZE]);
void fillOdd (int rname [SIZE]);
int main (void)
{
	int arr[SIZE] = {0};
	int arr2[SIZE] = {0};
	printer(arr);
	fillEven(arr);
	printer(arr);
	fillOdd(arr2);
	printer(arr2);
}

void printer (int rname [SIZE])
{
	int i = 0;
	for (i = 0; i < SIZE; i++)
	{
		printf("Array[%d] = %d \n", i , rname[i]);
	}

}

void fillEven(int rname[SIZE])
{
	int i;
	int evenVal = 0;
	for (i = 0; i < SIZE; i++)
	{
	
		evenVal = evenVal + 2;
		rname[i] = evenVal;
			
		
	}
	
}

void fillOdd (int rname [SIZE])
{
	int i; 
	int oddVal;
	for (i = 0; i < SIZE; i++)
	{
		oddVal = oddVal + 1;
		rname[i] = oddVal;
	}
}
