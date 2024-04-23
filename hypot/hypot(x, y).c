#include <stdio.h>
//hypot(x, y)- Returns the length of the hypotenuse of a right triangle with sides x and y.

int main(){
	double x = 3.0;
	double y = 4.0;
	double hypotXY = hypot(x, y);
	printf("The hypotenus of %f && %f is %f\n", x, y, hypotXY);
}
