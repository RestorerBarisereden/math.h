#include <stdio.h>
// atan2(y, x) - Returns the arc tangent of y/x in radians, taking into account the signs of both arguments.

int main(){
	double x = 1.5;
	double y = 2.4;
	double arcTan2 = atan2(y, x);
	printf("The double arc tangent  of %f is %f\n", x, y, arcTan2);
}
