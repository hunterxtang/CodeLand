#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char *argv[])
{
	int nums[5] = {1, 4, 65, 5, 2};
	int len = 5;
	for(int i=0; i<len; i++) {
		for(int k=0; k<len-i-1; k++) {
			if(nums[k] > nums[k+1]) {
				int tmp = nums[k];
				nums[k] = nums[k+1];
				nums[k+1] = tmp;
			}
		}
	}
	for(int j=0; j<len; j++)
		cout<<nums[j]<<endl;
	
}
