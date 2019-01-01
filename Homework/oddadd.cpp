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
	for(int i=nu; i<= n; i++) {
		if(i%2 == 1) {
			total+=i;
		}
	}
	cout<<"the sum is "<<total<<endl;	
}
