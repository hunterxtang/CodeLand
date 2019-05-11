#include <iostream>
#include <cmath>
#include <algorithm>
using namespace::std;
int least = 1000000;
void find(int n, int *nums, int *taken)
{
	int tot1 = 0;
	int tot2 = 0;
	int i;
	for(i=0; i<n; i++) {
		if(taken[i] == 1) {
			tot1+=nums[i];
		}	
		else if(taken[i] == 2) {
			tot2+=nums[i];
		}
		else if(taken[i] == 0) {
			break;
		}
	}
	if(i == n) {
		if(abs(tot1 - tot2) < least) 
			least = abs(tot1-tot2);
        }
	else {
		for(int j=1; j<=2; j++) {
			taken[i] = j;
			find(n, nums, taken);
		}
		taken[i] = 0;
	}
}
int main()
{
	int n;
	cin>>n;
	int *nums = new int[n];
	for(int i=0; i<n; i++)
		cin>>nums[i];
	int *taken = new int[n];
	for(int i=0; i<n; i++)
		taken[i] = 0;
	find(n, nums, taken);
	cout<<least<<endl;
}
