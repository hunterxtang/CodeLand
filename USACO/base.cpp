#include <iostream>
using namespace::std;
int main()
{
	int num;
	cin>>num;
	int base;
	cin>>base;
	cout<<"number is: "<<num<<endl;
	cout<<"base is: "<<base<<endl;
	int output[10000];
	int i=0;
	int num2 = num;
	while(num > 0) {
		output[i] = num%base;
		num = num/base;
		i++;
	}
	cout<<num2<<" in base "<<base<<" is: ";
	for(int j=i-1; j>=0; j--) {
		cout<<output[j];
	}
	cout<<endl;
}
