#include <stdio.h>
//erfc(x) - Returns the complementary error function of x.

int main(){
	double x = 0.5;
	double erfcX= erfc(x);
	printf("The complementary error function of %f is %f\n", x, erfcX);
}
