#include <iostream>
using namespace::std;
int fib(int n)
{ 
	if(n == 0) return 0;
	else if(n == 1) return 1;
	else return fib(n-1)+fib(n-2);
}
int main(int argc, char *argv[])
{
	
	if(argc<2) {
		cout<<"Usage: FibonacciRec a-number"<<endl;
		return 0;
	}
	int n = atoi(argv[1]);
	if(n>25) {
		cout<<"errer, plz tri agan, nuber to big"<<endl;
		return 0;
	}
        if(n<0) {
                cout<<"errer, plz tri agan, nuber to small"<<endl;
                return 0;
        }

	cout<<fib(n)<<endl;
}
