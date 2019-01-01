#include <iostream>
using namespace::std;
int main(int argv, char* argc[])
{
	int nums[7] = {1, 3, 2, 9876, 45, 34, 345};
	int len = 7;
	int i;
	for(i=0; i<len; i++) {
		int y = nums[i];
		for(int j=0; j<i; j++) {
			if(nums[i] < nums[j]) {
				for(int l=i-1; l>=j; l--) {
					nums[l+1] = nums[l];
				}
				nums[j] = y;
			}
		}
	}
	for(int k=0; k<len; k++) {
		cout<<nums[k]<<endl;
	}
}	 
