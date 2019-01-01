#include <iostream>
using namespace::std;
int main()
{
	int nums[11] = {2, 54, 3920, 86, 88, 48, 8, 99, 12, 77, 25};
        int max = nums[0];
	int min = nums[0];
        for(int i=0; i<10; i++) {
                if(nums[i] > max)
                        max=nums[i];
		if(nums[i] < min)
			min=nums[i];
	}
	cout<<max<<endl;
	cout<<min<<endl;
	return(0);
}
