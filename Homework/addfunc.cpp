#include <iostream>
using namespace::std;
int main()
{
	int number;
	cout<<"Type an integer"<<endl;
	cin >>number;
	int total = 0;
	for(int i=1; i<=number; i++)
		total += i;
	cout<<total<<endl;
	return(0);

}
