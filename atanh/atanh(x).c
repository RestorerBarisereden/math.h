#include <stdio.h>
//atanh(x) - Returns the inverse hyperbolic tangent of x.

int main(){
	double x = 0.25;
	double atanhX = atanh(x);
	printf("The inverse hyperbolic tangent of %f is %f\n", x, atanhX);
}
