#include <iostream>
using namespace::std;
int main()
{
	int num[10] = {1, 5, 3, 2, 4, 666, 7, 77, 10, 33};
	int result = 0;
	for(int i=0; i<10; i++)
		result+=num[i];
	cout<<result<<endl;
}
