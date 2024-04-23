#include <stdio.h>
//j0(x) - Returns the besssel function of the first kind of order 0, at the value of x.

int main(){
	double x = 0.0;
	double j0X = j0(x);
	printf("The value of the bessel function j0 at %f is %f\n", x, j0X);
}
