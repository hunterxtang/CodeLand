#include <iostream>
using namespace::std;
int main()
{
	int n, m;
	cin>>n>>m;
	int nums[100][100];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin>>nums[i][j];
		}
	}
	int di;
	cin>>di;
	if(di == 1) {
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(nums[i] == 0) {
					if(nums[j] == 0) {
						nums[j]+=4;
					}
					else if(nums[j] == 1) {
						nums[j]+=3;
						nums[i]+=1;
					}
					else if(nums[i] == 2) {
						nums[j]+=2;
						nums[i]+=2;
					}
					else if(nums[i] == 3) {
						nums[j]+=1;
						nums[i]+=3;
					}
					else	
						nums[i]+=4;
				}
				else if(nums[i] == 1) {
					if(nums[j] == 0) {
						nums[i]-=1;
						nums[j]+=2;
					}
					if(nums[j] == 1) {
						nums[j]+=2;
					}
					else if(nums[j] == 2) {
						nums[i]++;
						nums[j]++;
					}
					else if(nums[j] == 4) {
						nums[j]-=2;
						nums[i]+=1;
					}
					else
						nums[i]+=2;
				}
				else if(i == 2) {
					if(nums[j] == 0) {
						
					}
				}
				else if(i == 3) {

				}
				else
			}
		}
	}
}
