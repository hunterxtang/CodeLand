#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int nums1[100000];
	for(int i=0; i<n; i++) cin>>nums1[i];
	int q; 
	cin>>q;
	int nums2[50000];
	for(int i=0; i<q; i++) cin>>nums2[i];
	int left, right;
	int total = 0;
	for(int i=0; i<q; i++) {
		left = 0; 
		right = n - 1;
		while(left <= right) {
			int pos = (left + right) / 2;;
			if(nums2[i] == nums1[pos]) {
				total++;
				break;
			}
			else if(nums2[i] > nums1[pos]) {
				left = pos + 1;
			}
			else {
				right = pos - 1;
			}
		}
	}
	cout<<total<<endl;
}
