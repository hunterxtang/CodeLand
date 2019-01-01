#include <iostream>
#include <cmath>
#include <cstdio>
using namespace::std;
int main()
{
	while(1) {
		int n;
		cin>>n;
		if(n == 0) break;
	
		int nums[10000];
		for(int i=0; i<n; i++) cin>>nums[i];

		double result=0;
		for(int i=0; i<n; i++) result+=nums[i];
		double mean = result/n;

		double variance=0;
		for(int i=0; i<n; i++) {
			variance += ((nums[i] - mean) * (nums[i] - mean));
		}
		variance = variance / n;

		double sd = sqrt(variance);
		printf("%.8f", sd);
		cout<<endl;
	}	
}
