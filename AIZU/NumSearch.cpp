#include <iostream>
using namespace::std;
int main()
{
	int len;
	cin>>len;
	int *nums = new int[len];
	for(int i=0; i<len; i++) cin>>nums[i];
	int find;
	cin>>find;
	for(int i=0; i<len; i++) {
		if(nums[i] == find) { 
			cout<<"Found"<<endl; 
			return 0;
		}
	}
	cout<<"Not Found"<<endl;
}
