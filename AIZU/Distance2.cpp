#include <iostream>
#include <cstdio>
#include <cmath>
using namespace::std;
int main()
{
	int dimension;
	cin>>dimension;
	int x[1000];
	int y[1000];
	int result;
	double d, d1, d2, d3;
	double dinf = 0;
	for(int i=0; i<dimension; i++) cin>>x[i];
	for(int j=0; j<dimension; j++) cin>>y[j];
	for(int i=0; i<dimension; i++) {
		d = abs(y[i] - x[i]);
		d1 += d;
		d2 += d*d;
		d3 += d*d*d;
		if(d > dinf) dinf = d;

	}
	printf("%.8f\n", d1);
	printf("%.8f\n", sqrt(d2));
	printf("%.8f\n", pow(d3, 1.0/3));
	printf("%.8f\n", dinf);
}
