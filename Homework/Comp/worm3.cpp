#include <iostream>
using namespace::std;
int main()
{
	double prate, crate, pwidth, cwidth, n;
	cin>>prate>>crate>>pwidth>>cwidth>>n;
	double ptime=pwidth/prate;
	double ctime = (cwidth/crate)*2;
	while(n > 0) {
		if(n < ptime - 1e-10) {
			cout<<"paper"<<endl;
			return 0;
		}
		n -= ptime;
		if(n < ctime - 1e-10) {
			cout<<"cover"<<endl;
			return 0;
		}
		n -= ctime;
	}
	cout<<"paper"<<endl;
	return 0;
}
