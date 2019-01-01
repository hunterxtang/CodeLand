#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	int nums[6] = {10, 20, 8, 4, 18, 79};
	int ind = 0;
	int len = 6;
	int i,k;
	for(i=0; i<len; i++) {
		for(k=0; k<i; k++) {
			if(nums[i] < nums[k]) {
				break;
			}
		}
		int tmp = nums[i];
		for(int j=i; j>k; j--) {
			nums[j] = nums[j-1];
		}
		nums[k] = tmp;			
	}
	for(int x=0; x<len; x++)
	cout<<nums[x]<<endl;
}

