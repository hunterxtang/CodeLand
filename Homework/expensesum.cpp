#include <iostream>
#include <fstream>
using namespace::std;

int getSum(int len, int nums[])
{
	int total = 0;
	for(int i=0; i<len; i++) {
		total+=nums[i];
	}
	return(total);
}

int main(int argc, char *argv[])
{
        if(argc < 2) {
                cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
                return 0;
        }
	ifstream file(argv[1]);
	string line;
	int ex;
	int total = 0;
        if(file.is_open()) {
		int n[1000];
		int idx = 0;
		while(getline(file, line)) {
			n[idx] = stoi(line);
			idx ++;
		}	
		int sum = getSum(idx, n);
		cout<<sum<<endl;
	}
	file.close();
}
