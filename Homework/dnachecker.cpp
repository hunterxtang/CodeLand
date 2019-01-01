#include <iostream>
using namespace::std;
int main()
{
	int badletter = 0;
	char dna[] = "ATcB6R";
	for(int i=0; i<6; i++) {
		if(dna[i] == 'A') continue;
		else if(dna[i] == 'T') continue;
		else if(dna[i] == 'C') continue;
		else if(dna[i] == 'c') continue;
		else if(dna[i] == 't') continue;
		else if(dna[i] == 'g') continue;
		else badletter++; 
	}
	cout<<badletter<<endl;
}
