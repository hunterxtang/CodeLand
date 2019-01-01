#include <iostream> 
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int nums1 = 0;
	int nums2 = 0;
	if(n < 1) {
		for(int i=1; i>=n; i--)
			nums1+=i;
	}	
	else {
		for(int i=1; i<=n; i++)
			nums2+=i;
	}
	if(n<1)
		cout<<nums1<<endl;
	else
		cout<<nums2<<endl;
		
}
