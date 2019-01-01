#include <iostream>
using namespace::std;
int main()
{
	int nums[5] = {1,3,4,76,899};
	int tot = 5;
	int nums2[5] = {2,65,898,7777,7778};
	int tot2 = 5;
	int nums3[10];
	int i = 0;
	int j = 0;
	int k = 0;
	//use or instead of and
	while(i < tot || j < tot2) {
		//when nums<nums2 or when nums2 is finished
		if(j == tot2 || nums[i] < nums2[j]) {	
			nums3[k] = nums[i];
			k+=1;
			i+=1;
		}
		//when nums2<nums or when nums is finished
		else {
			nums3[k] = nums2[j];
			k+=1;
			j+=1;
		}
	}
	for(int h=0; h<k; h++)
		cout<<nums3[h]<<endl;
}
