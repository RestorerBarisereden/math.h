#include <stdio.h> 
//erf(x) - Returns  the error function of x.

int main(){
	double x = 1.3;
	double erfX = erf(x);
	printf("The error function of %f is %f\n", x, erfX);
}
