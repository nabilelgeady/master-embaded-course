/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf ("Enter  2 numbers ");
	fflush (stdin); fflush (stdout);

	int x,y;
	scanf("%d %d", &x, &y);
	printf("sum is %d :" ,x+y);
	return EXIT_SUCCESS;
}
