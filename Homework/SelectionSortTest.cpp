#include <iostream>
using namespace::std;
int main(int argc, char* argv[])
{
	int tot = 5;
	int nums[5] = {1, 22, 2, 4, 55};
	for(int i=0; i<tot; i++) {
		int minslot = i;
		for(int k=i; k<tot; k++) {
			if(nums[k] < nums[minslot]) {
				minslot = k;

			}
		}
		int tmp = nums[i];
		nums[i] = nums[minslot];
		nums[minslot] = tmp;
	}
	for(int j=0; j<tot; j++)
		cout<<nums[j]<<endl;		
}
