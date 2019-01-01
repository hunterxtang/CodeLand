#include <iostream>
using namespace::std;
int main(int argv, char* argc[])
{

	int nums[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int len = 25;
	int j = 67;
	int pos;
	pos = len/2;
	while(len > 0)	{
		if(nums[pos] == j) {
			cout<<"found the number at position "<<pos<<endl;
			break;
		} else if(nums[pos] < j)	{
			pos = (len + pos) / 2;
			len = len / 2;
		} else	{
			pos = pos / 2;
			len = len / 2;
		}
	}
	if(len == 0) {
		cout<<"number not found"<<endl;
	}
}				
