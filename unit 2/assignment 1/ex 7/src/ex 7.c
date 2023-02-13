/*
 ============================================================================
 Name        : ex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x , y ;
	float temp;
	printf("Enter numbers of x and y \n");
	scanf("%f %f" , &x ,&y);
	printf("value before swap :\n %f \n %f\n  ",x,y);
	x=x+y;
	y= x-y ;
	x = x-y ;
	printf("value after swap :\n %f \n %f\n",x,y);


	return EXIT_SUCCESS;
}
