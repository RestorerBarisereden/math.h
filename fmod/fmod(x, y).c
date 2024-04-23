#include <stdio.h>
//fmod(x, y) - Returns the floating point remainder of x/y (using the IEEE 754 standard for remainder)

int main(){
	double x = 4.2;
	double y = 1.5;
	double fmodXY = fmod(x, y);
	printf("The floating point remainder of %f*%f is %f\n", x, y, fmodXY);
}
