#include <algorithm>
#include <iostream>
#include <cmath>
using namespace::std;
int main()
{
	int n, k;
	cin>>n>>k;
	string nums = "";
	//for(int i=0; i<100; i++)
		//nums[i] = 0;
	int tot = 1;
	nums = to_string(tot);
	nums[0] = 1;
	for(int i=1; i<25; i++) {
		tot*=2;
		nums = to_string(tot);
		cout<<nums;
	}
	if(nums.length() == 1) {
		cout<<nums<<endl;
	}
	else
		cout<<nums[1]<<endl;
}
