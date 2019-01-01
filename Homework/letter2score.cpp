#include <iostream>
using namespace::std;
int main()
{
	int grade = 'A';
	switch(grade) {
		case 'A':
			cout<<">=90"<<endl;
			break;
		case 'B':
			cout<<">=80"<<endl;
			break;
		case 'C':
			cout<<">=70"<<endl;
			break;
		case 'D':
			cout<<">=60"<<endl;
			break;
		case 'F':
			cout<<">=50"<<endl;
			break;
		default:
			cout<<"you hacked"<<endl;
			break;
	}
}
