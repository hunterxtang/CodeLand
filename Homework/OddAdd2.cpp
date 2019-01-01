#include <iostream>
using namespace::std;
int main(int argc, char *argv[]) 
{
	if(argc < 3) {
		cout << "Usage: " << argv[0] << "a-number" << endl;
		return(0);
	}
	int nu = atoi(argv[1]);
	int n = atoi(argv[2]);
	int total = 0;
	if(nu%2 == 1) {
		for(int i=nu; i<= n; i += 2) {
			total+=i;
		}
	} else	{
		for(int i=nu+1; i<= n; i += 2) {
			total+=i;
		}
	}
	cout<<"the sum is "<<total<<endl;	
}
