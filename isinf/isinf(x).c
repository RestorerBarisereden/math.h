#include <stdio.h>
//isinf(x) - Returns 1 if x is positive or negative infinity, and 0 otherwise

int main(){
	double x = 'INFINITY';
	int isinfX = isinf(x);
	printf("The value of x is %s infinity.\n", (isinfX == 1)? "NOT": "A");
}
