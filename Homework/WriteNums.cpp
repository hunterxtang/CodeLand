#include <iostream>
#include <fstream>
using namespace::std;

int main(int argc, char* argv[]) {
	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	int nums[5] = {1, 2, 3, 4, 5};
	ofstream out(argv[1]);
	if(out.is_open()) {
		for(int i = 0; i < 5; i ++) {
			out << nums[i] << endl;
		}
		out.close();
	}
	else {
		cout<<"failure"<<endl;
	}
	return 0;
}
