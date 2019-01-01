#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	if(argc < 2) {
		cout<<"Usage: Fibonacci  a-number"<<endl;
		return(0);
	}
	int n = atoi(argv[1]);
	int f[26];
	if(n > 25) {
		cout<<"errer, plz trie agan"<<endl;
		return(0);
	}
	f[0] = 0;
	f[1] = 1;
	for(int i=2; i<=n; i++) {
		f[i] = f[i-1] + f[i-2];
	}
	cout<<f[n]<<endl;
		
		 	
}
