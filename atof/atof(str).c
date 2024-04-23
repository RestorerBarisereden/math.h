#include <stdio.h>
//atof(str) - Converts the string str into a floating point number

int main(){
	char str[]= "3.1415926";
	double num = atof(str);
	printf("The floating point representation of '%s' is %f\n", str, num);
}
