#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char* argv[])
{
	if(argc<2) {
		cout<<"Usage: "<<argv[0]<< "file-name"<<endl;
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
	cout<<"n is "<<n<<endl;
	for(int slen = 0; slen < n; slen++) {
		int swap = 0;
		for(int i=0; i<n-slen-1; i++) {
			int pos = nums[i];
			if(nums[i] > nums[i+1]) { 	
				nums[i] = nums[i+1];
				nums[i+1] = pos;
				swap++;
			}	
		}
		if(swap == 0)
			break;
	}
	for(int i = 0; i < n; i++)
	cout<<nums[i]<<endl;
}

