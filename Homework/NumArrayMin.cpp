#include <iostream>
using namespace::std;
int main()
{
	int nums[10] = {10, 438, 82, 91, 2, 986, 8937, 8, 9, 38};
	int i;
	int x = 0;
	int min = nums[0];
	for(i=0; i<10; i++) {
		if(nums[i] < min) 
			min = nums[i];
	} 
	cout<<min<<endl;
		
}
