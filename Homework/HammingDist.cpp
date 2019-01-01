#include <iostream>
using namespace::std;
int main()
{
	int total = 0;
	char dna[] = "ABDCRS";
	char dma[] = "ABSWRE";
	for(int i=0; i<6; i++) {
		if(dna[i] != dma[i])
			total++;
	} 
	cout<<"the hamming distance is "<<total<<endl;
}

		
