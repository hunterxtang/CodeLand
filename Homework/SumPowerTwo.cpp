#include <iostream>
#include <fstream>
using namespace::std;
int main(int argc, char *argv[])

{
        if(argc<2) {
                cout<<"Usage: "<<argv[0]<< "file-name"<<endl;
                return 0;
        }
        int num = atoi(argv[1]);
	int sum = 0;
	
	for(int i=0; i<num+1; i++) {
		int p=1;
		for(int j=0; j<i; j++) {
			p=p*2;
		}
		sum+=p;
	}
	cout<<sum<<endl;
	
}
