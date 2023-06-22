#include "main.h"
/*
 * Definition of the swap_int function
 *
 * Swaps the values of two integer variables
 */
void swap_int(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
