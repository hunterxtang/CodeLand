#include <iostream>
using namespace::std;
int main()
{
	int n, m;
	cin>>n>>m;
	int **nums = new int[n];
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>nums[i][j];
		}
	}	 
}
