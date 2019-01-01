#include <iostream>
using namespace::std;
int main()
{
	int i=0;
	string a,b;
	cin>>a;
	cin>>b;
	for(i=0; i<a.length(); i++) {
		if(a[i] != b[i]) {
			cout<<"No"<<endl;
			break;
		}
	}
	if(i == a.length())
		cout<<"Yes"<<endl;
}
