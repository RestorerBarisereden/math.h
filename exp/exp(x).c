#include <stdio.h>
//exp(x) - Returns the value of e (the base of the natural logarithms) raised to the power of x

int main(){
	double x = 2.0;
	double expX = exp(x);
	printf("e to the power of %f is %f\n", x, expX);
}

