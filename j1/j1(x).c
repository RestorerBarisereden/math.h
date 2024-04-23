#include <stdio.h>
//j1(x) - Returns the bessel function of the second kind of order 1, at the value of x.

int main(){
	double x = 2.0;
	double j1X = j1(x);
	printf("The value of the bessel function j1 at %f is %f\n", x, j1X);
}
