/*
 ============================================================================
 Name        : vowel.c
 Author      : Nabil
 Version     :
 Copyright   : Your copyright notice

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char character;
	printf("Enter a character which wanting check:\n"); //to check vowel or constant
	fflush (stdin); fflush (stdout);
	scanf("%c",&character);
	if (character =='a' || character== 'i' ||character== 'o' ||character=='e' ||character=='u'
			|| character== 'A'  || character== 'I' || character=='O' || character=='E' || character=='U')

		printf("vowel \n");
	else
		printf("constant");


	return EXIT_SUCCESS;
}
