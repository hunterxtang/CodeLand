#include <iostream>
#include <string>
using namespace::std;
int main()
{
	while(1) {
		int result=0;
		string x;
		cin>>x;
		if(x=="0") break;
		int l=x.length();
		for(int i=0; i<l; i++) {
			string s0(1, x[i]);
			int a=stoi(s0);	
			result+=a;
		}
		cout<<result<<endl;
	}
}
