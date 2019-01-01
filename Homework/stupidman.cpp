#include <iostream>
using namespace::std;

int main(int argc, char *argv[])
{
	if(argc>1) {
		cout<< "Boop" << argv[1] << endl;
	}
	else {
		cout << "What is your name stupid man"<<endl;
		string name;
		cin >> name;
		cout << "You are stupid, and your name is " << name << endl;
	}
	return (0);
}

