/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x;
	printf ("Enter Integer : ");
	fflush (stdin);
	fflush (stdout);
	scanf ("%d",&x);
	printf ("you entered : %d", x);

	return EXIT_SUCCESS;
}
