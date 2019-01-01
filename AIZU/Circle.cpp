#include <iostream>
#include <stdio.h>
using namespace::std;
int main()
{
	double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208;
	double r;
	cin>>r;
	double cir = 2*r*pi;
	double area = r*r*pi;
	printf("%.6f %.6f\n", area, cir);
}
