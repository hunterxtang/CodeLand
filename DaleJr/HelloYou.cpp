#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	if(argc > 1) {
		cout<< "Hello" << argv[1] << endl;
	}
	else {
		cout <<"Your name please: "<< endl;
		string name;
		cin >> name;
		cout << "hello" << name << endl;
	}
	return(0);
}
