#include <stdio.h>
//acosh(x) - Returns the inverse hyperbolic cosine of x.

int main(){
	double x = 5.0;
	double acoshX = acosh(x);
	printf("The inverse hyperbolic cosine of %f is %f\n", x, acoshX);
}
