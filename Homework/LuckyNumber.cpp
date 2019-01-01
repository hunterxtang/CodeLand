#include <iostream>
using namespace::std;
int main(int argc, char *argv[]) 
{
	int array[12]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	if(argc < 2) {
		cout<<"Usage: LuckyNumber a-number"<<endl;
		return(0);
	}
	int num = atoi(argv[1]);
	bool lucky = false;
	for(int i=0; i<12; i++) {
		if(num == array[i]) {
			lucky = true;
			break;
		}
	}
	if(lucky == true) {
		 cout<<"you got the lucky number, it is "<<num<<endl;
	}
	else {
		cout<<"you fail"<<endl; 
	}	
	return(0);
}
	
