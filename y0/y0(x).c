#include <stdio.h>
//y0(x) - Returns the bessel function of the second kind of order 0, at the value of x.

int main(){
	double x= 1.0;
	double y0X = y0(x);
	printf("The value of the bessel function y0 at %f is %f\n", x, y0X);
}
