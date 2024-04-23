#include <stdio.h>
//isnan(x) - Returns 1 if x is NaN (not a number) and 0 otherwise.

int main(){
	double x = 2;
	int isnanX = isnan(x);
	printf("The value of x is %s a number.\n", (isnanX == 1)? "NOT": "A");
}
