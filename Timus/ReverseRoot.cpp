#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	double a;
	int tot = 0;
	double *srarr = new double[1000000];
	while(cin>>a) {
		double sr = sqrt(a);
		srarr[tot] = sr;
		tot++;
	}
	for(int i=tot-1; i>=0; i--) {
		printf("%.4f\n", srarr[i]);
	}
}
