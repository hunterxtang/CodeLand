#include <iostream>
using namespace::std;
int main()
{
	int num;
	cin>>num;
	int count=0;
	int nums[10000];
	for(int i=0; i<num; i++) cin>>nums[i];
	for(int i = 0; i < num; i++) {
		int s = 0;
		for(int j=0; j<num-i-1; j++) {
			int pos = nums[j];
			if(nums[j] > nums[j+1]) {
				nums[j] = nums[j+1];
					nums[j+1] = pos;
					s++;
					count++;
					
                        }
                }
                if(s == 0)
                        break;
        }
	for(int i = 0; i < num; i++) {
                if(i<num-1) {
                        cout<<nums[i]<<" ";
                }
                else {
                        cout<<nums[i]<<endl;
                }

        }
	cout<<count<<endl;
}
