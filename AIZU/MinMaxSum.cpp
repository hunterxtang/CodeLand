#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int nums[13000]; 
	int i, j;
	for(i=0; i<n; i++) {
		cin>>nums[i];
	}
	int min = nums[0];
	int max = nums[0];
	long sum = nums[0];
	for(j=1; j<n; j++) {
		if(nums[j] < min) {
			min=nums[j];
		}
		if(nums[j] > max) {
			max=nums[j];
		}
		sum+=nums[j];
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;

}
