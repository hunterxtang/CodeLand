#include <iostream>
using namespace::std;
int main(int argc, char *argv[])
{
	char dna[] = {'A', 'T', 'C', 'G'};
	int c = 0;
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			for(int k=0; k<4; k++) {
				c++;
				cout<<c<<" "<<dna[i]<<dna[j]<<dna[k]<<endl;
			
			}
		}
	}
}
