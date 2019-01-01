#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int *nums1 = new int[n];
	for(int i=0; i<n; i++) cin>>nums1[i];
	int q; 
	cin>>q;
	int *nums2 = new int[q];
	for(int i=0; i<q; i++) cin>>nums2[i];
	int total = 0;
	for(int i=0; i<q; i++) {
		for(int j=0; j<n; j++) {
			if(nums1[j] == nums2[i]) {
				total++;
				break;
			}
		} 
	}
	cout<<total<<endl;
}
