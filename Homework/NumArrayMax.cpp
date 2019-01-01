#include <iostream>
using namespace::std;
int main()
{
	int nums[10] = {1, 3, 6, 8, 83, 100, 4, 1234, 20, 88};
	int sum = 0;
	int maxsofar = nums[0];
	
	for(int i=0; i<10; i++) {
		if(nums[i] > maxsofar)
			maxsofar=nums[i];	
	}
	cout<<maxsofar<<endl;
	return(0);
	
}
