#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int *nums = new int[n];
	for(int i=0; i<n; i++) {
		cin>>nums[i];
	}	
	sort(nums, nums + n);
	int max = 0;
	int min = 10000000;
	for(int i=0; i<n; i++) {
		if(max < nums[i]) {
			max = nums[i];
		}
	} 
	cout<<"maximum: "<<max<<endl;
	for(int i=0; i<n; i++) {
		if(min > nums[i]) {
			min = nums[i];
		}
	}
	cout<<"minimum: "<<min<<endl;
	int average = 0;
	for(int i=0; i<n; i++) {
		average+=nums[i];
	}
	cout<<"average: "<<average/n<<endl;
	cout<<"median: "<<nums[n/2]<<endl;
}
