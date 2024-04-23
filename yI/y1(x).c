#include <stdio.h>
//y1(x) - Returns the bessel function of the second kind of order 1, at the value of x.

int main(){
	double x = 1.5;
	double y1X = y1(x);
	printf("The value of the bessel function y1 at %f is %f\n", x, y1X);
}
