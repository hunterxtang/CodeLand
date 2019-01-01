#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char *argv[])
{
	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	ifstream file(argv[1]);
	string line;
	if(!file.is_open()) {
		cout<<"file reading error"<<endl;
		return 0;
	}
	int nums[1234];
	int n = 0;
	while(getline(file, line)) {
		nums[n] = stoi(line);
		n++;
	}
	file.close();
	cout<<n<<endl;
	for(int leftmost = 0; leftmost < n-1; leftmost++) {
		int pos = leftmost;
		for(int i = pos+1; i < n; i++) {
			if(nums[i] < nums[pos])
				pos = i;
		}
		int n = nums[leftmost];
		if(nums[leftmost] != nums[pos]) {
			nums[leftmost] = nums[pos];
			nums[pos] = n;
		}
	}
	for(int i = 0; i < n; i++)
	cout<<nums[i]<<endl;		
}
