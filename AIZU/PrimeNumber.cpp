#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	int len;
	cin>>len;
	int *nums = new int[len];
	for(int i=0; i<len; i++) cin>>nums[i];	
	int total = 0;
	for(int i=0; i<len; i++) {
		int x = nums[i];
		int y = sqrt(x);
		bool ifprime = true;
		for(int j=2; j<=y; j++) {
			if(x % j == 0) {
				ifprime = false;
				break;
			}
		}
		if(ifprime) total++;
	}
	cout<<total<<endl;
}
