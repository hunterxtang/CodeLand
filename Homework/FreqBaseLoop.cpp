#include <iostream>
using namespace::std;
int main()
{
	int amount[4];

	amount[0] = 0;
	amount[1] = 0;
	amount[2] = 0;
	amount[3] = 0;

	char dna[] = "GGGGGGG";
	for(int i=0; i<7; i++) {
		if(dna[i] == 'A')
			amount[0]++;
		else if(dna[i] == 'T')
			amount[1]++;
		else if(dna[i] == 'C')
			amount[2]++;
		else if(dna[i] == 'G')
			amount[3]++;
	}
	int maxsofar = 0;
	for(i = 0; i < 4; i ++)	{
		if(amount[i] > maxsofar)
                        maxsofar=amount[i];
	}

	if(amount[0] == maxsofar) 
		cout<<"A is the most, there are "<<amounta<<" A's"<<endl;
	if(amount[1] == maxsofar)
		cout<<"T is the most, there are "<<amountt<<" T's"<<endl;
	if(amount[2] == maxsofar)
		cout<<"C is the most, there are "<<amountc<<" C's"<<endl;
	if(amount[3] == maxsofar)
		cout<<"G is the most, there are "<<amountg<<" G's"<<endl; 
		
}
