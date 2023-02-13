/*
 ============================================================================
 Name        : check.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ;
	printf ("Enter the number which wanting check : \n");
	fflush (stdin);
	fflush (stdout);
	scanf("%d ",&n);
	if  (n%2 != 0)
		printf (" odd");
	else
		printf ("Even");

		return EXIT_SUCCESS;
}
