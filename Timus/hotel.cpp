#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int **nums;
	nums = new int*[n];
	for(int i=0; i<n; i++) {
		nums[i] = new int[n];
	}
	int curr_num = 1;
	int curr_i = 0;
	int curr_j = n - 1;
	int diag = curr_j -  curr_i;
	while(curr_num <= n * n)	{
		nums[curr_i][curr_j] = curr_num;
		curr_num ++;
		curr_i ++;
		curr_j ++;
		if(curr_j >= n)	{
			diag --;
			curr_i = 0;
			curr_j = curr_i + diag;
		}
		if(curr_j < 0)	{
			curr_i = -curr_j;
			curr_j = 0;
		}
		if(curr_i >= n)	{
			diag --;
			curr_j = 0;
			curr_i = curr_j - diag;
		}
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}
}
