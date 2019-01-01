#include <iostream>
using namespace::std;
int main()
{
	int tot;
	cin>>tot;
	int maxprofit = -2147483647;
	int nums[200000];
	for(int i=0; i<tot; i++) cin>>nums[i];
	for(int i=0; i<tot; i++) {
		for(int j=i+1; j<tot; j++) {
			int profit=nums[j] - nums[i];
			if(maxprofit < profit) {
				maxprofit = profit;
			}
		}
	}
	cout<<maxprofit<<endl;
	
}
