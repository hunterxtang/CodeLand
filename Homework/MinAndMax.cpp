#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	int nums[5] = {10, 78, 4, 2, 1};
	int tot = 5;
	int minslot = 0;
	int maxslot = 0;
	for(int i=0; i<tot; i++) {
		if(nums[i] < nums[minslot]) {
			minslot = i;
		}
	}
	for(int j=0; j<tot; j++) {
		if(nums[j] > nums[maxslot]) {
			maxslot = j;
		}
	}
	int tmp = nums[minslot];
	nums[minslot] = nums[0];
	nums[0] = tmp;
	int tmp2 = nums[maxslot];
	nums[maxslot] = nums[tot-1];
	nums[tot-1] = tmp2;
	for(int k=0; k<tot; k++)
		cout<<nums[k]<<endl;
}
