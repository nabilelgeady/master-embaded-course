/*
 ============================================================================
 Name        : ex6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void) {
	float x , y, temp;
			printf("Enter numbers of x andy");
			scanf("%f %f ", &x ,&y);
			printf("value before swap :\n %f \n %f\n  ",x,y);
			x=temp ;
			x=y;
			y=temp;
			printf("value after swap :\n %f \n %f\n %f\n",x,y);
	return EXIT_SUCCESS;
}
