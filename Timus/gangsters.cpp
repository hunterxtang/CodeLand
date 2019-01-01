#include <iostream>
using namespace::std;
int main()
{
	int h, l;
	cin>>h>>l;
	int cans = h + l - 1;
	int newh = cans - h;
	int newl = cans - l;
	cout<<newh<<" "<<newl<<endl;
}
