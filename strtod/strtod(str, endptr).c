#include <stdio.h>
//strtod(str, endptr) - Converts a string str into a double-precision floating point number, storing the end of the valid number in endptr.

int main(){
	char str[] = "3.1415926";
	char endptr;
	double num = strtod(str, &endptr);
	printf("The double floating point representation of '%s' %f is %f\n", str, endptr, num);
}
