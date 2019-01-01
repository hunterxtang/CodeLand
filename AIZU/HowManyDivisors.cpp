#include <iostream>
using namespace::std;
int main()
{
	int a, b, c;
	cin>>a;
	cin>>b;
	cin>>c;
	int tot = 0;
	for(int i=a; i<b+1; i++) {
		if(c % i == 0) {
			tot++;
		}
	}
	cout<<tot<<endl;
}
