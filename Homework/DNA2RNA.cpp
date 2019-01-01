#include <iostream>
using namespace::std;
int main()
{
	char f[] = "ATTGC";
	for(int i=0; i<5; i++) {
		if(f[i] == 'T')
			cout<<"U";
		else
			cout<<f[i];
			
	}
	cout<<endl;
}
