/*
ID: hunterx3
LANG: C++
TASK: ride
*/
#include <iostream>
#include <fstream>
using namespace::std;
int main()
{
	ifstream fin("ride.in");
	ofstream fout("ride.out");
	string n1, n2;
	fin>>n1>>n2;
	int letter;
	int result = 1;
	int result2 = 1;
	for(int i=0; i<n1.length(); i++) {
		letter = n1[i] - 'A'+ 1;
		result*=letter;
		
	}
	for(int i=0; i<n2.length(); i++) {
		letter = n2[i] - 'A' + 1;
		result2*=letter;
	}
	if((result%47) == (result2%47)) fout<<"GO"<<endl;
	else fout<<"STAY"<<endl;
	fin.close();
	fout.close();
	return 0;	
}
