#include <iostream>
using namespace::std;
int main(int argc, char* argv[]) {
	int b = 0;
	int count = 0;
	int n;
	int left;
        cin>>n;
        int nums[10000];
	int i;
        for(i=0; i<n; i++) 
                cin>>nums[i];
	for(left = 0; left < n-1; left++) {
		int min = nums[left+1];
                int x = left+1;
		b = left+1;
                for(int j = x+1; j < n; j++) {
                        if(nums[j] < min) {
				min = nums[j];
				b = j;
			}
                }
		if(min < nums[left]) {
			int tmp = nums[b];
			nums[b] = nums[left];
			nums[left]  = tmp;
			count++;
		}

        }
        for(int i = 0; i < n; i++) {
		if(i<n-1) {
        		cout<<nums[i]<<" ";
		}
		else {
			cout<<nums[i];
		}
		
	}
	cout<<endl;
	cout<<count<<endl;
}
