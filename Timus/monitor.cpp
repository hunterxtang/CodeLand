#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int **nums = new int*[n];
	for(int i=0; i<n; i++) {
		nums[i] = new int[n];
		for(int j=0; j<n;j++) {
			cin>>nums[i][j];
		}
	}
	int max = 0;
	int min = 10000000;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(nums[i][j] > max)
				max = nums[i][j];
			if(nums[i][j] < min)
				min = nums[i][j];
		}
	}
	int len = 0; 
	int startpos_i, startpos_j;
	for(int i=0; i<2*n-1; i++) {
		if(i < n) 	{
			len = i+1;
			startpos_i = i;
			startpos_j = 0;
		}
		else {
			len = 2*n-1-i;
			startpos_i = n-1;
			startpos_j = i + 1 - n;
		}
		for(int j=0; j<len; j++) {
			cout<<nums[startpos_i][startpos_j]<<" ";
			startpos_i --;
			startpos_j ++;
		}
	}
	cout<<endl;
}
