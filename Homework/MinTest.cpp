#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	int nums[7] = {10,21,39,4,15,16,27};
	int x=0;
	for(int i=0; i<7; i++) {
		if(nums[i] < nums[x]) {
			x = i;	
		}
	}
	cout<<nums[x]<<endl;
	cout<<x<<endl;
}
