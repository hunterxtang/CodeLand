#include <iostream>
using namespace::std;
int main()
{
        int tot;
        cin>>tot;
        int big = -2147483647;
        int nums[200000];
	int min[200000];
	int max[200000];
        for(int i=0; i<tot; i++) cin>>nums[i];
	min[0] = nums[0];
        for(int i=1; i<tot; i++) {
		if(min[i-1] > nums[i]) min[i] = nums[i];
		else min[i] = min[i-1]; 
		max[i] = nums[i] - min[i-1];
		if(max[i] > big) big = max[i];
		 
        }	
        cout<<big<<endl;

}

