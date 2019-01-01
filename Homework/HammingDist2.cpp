#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char* argv[])
{
	if(argc < 2) {
		cout<<"Usage: "<<argv[0]<<" file-name"<<endl;
		return 0;
	}
	ifstream file(argv[1]);
	int total = 0;
	if(file.is_open()) {
		string s1, s2;
		getline(file, s1);
		getline(file, s2);
		cout<<"s1 "<<s1<<endl;
		cout<<"s2 "<<s2<<endl;
		for(int i=0; i<s1.length(); i++) {
			if(s1[i] != s2[i]) 
				total++;
		}
		file.close();
	}
	else {
		cout<<"unable to open file "<<argv[1]<<endl;
	}
	cout<<"the hamming distance is "<<total<<endl;
	return 0;
}

