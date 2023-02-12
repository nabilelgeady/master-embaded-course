/*
 ============================================================================
 Name        : ex5.c
 Author      : NABIL
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char G ;
	printf("enter character :");
	fflush (stdin); fflush (stdout);
	scanf( "%c" , &G);
	printf ("ASCII value of %G= %d" ,G,G );
	return EXIT_SUCCESS;
}
