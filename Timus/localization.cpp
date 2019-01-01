#include <iostream>
using namespace::std;
int main()
{
	int num;
	cin>>num;
	if(num>=1 && num<=4) 
		cout<<"few"<<endl;
	else if(num<=9)
		cout<<"several"<<endl;
	else if(num<=19)
		cout<<"pack"<<endl;
	else if(num<=49)
		cout<<"lots"<<endl;
	else if(num<=99)
		cout<<"horde"<<endl;
	else if(num<=249)
		cout<<"throng"<<endl;
	else if(num<=499)
		cout<<"swarm"<<endl;
	else if(num<=999)
		cout<<"zounds"<<endl;
	else 
		cout<<"legion"<<endl; 
}
