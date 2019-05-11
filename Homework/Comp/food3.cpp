#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int dif = 1000000;
	int *nums = new int[n];
	for(int i=0; i<n; i++)
		cin>>nums[i];
	sort(nums, nums + n);
	int tot = 0;
	for(int i=0; i<n-1; i++) {
		tot+=nums[i];
	}
	if(abs(nums[n]-tot) < dif) {
		
	}
}
