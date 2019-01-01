#include <iostream>
using namespace::std;
int main()
{
	int amounta = 0;
	int amountt = 0;
	int amountc = 0;
	int amountg = 0;
	char dna[] = "GGGGGGG";
	for(int i=0; i<7; i++) {
		if(dna[i] == 'A')
			amounta++;
		else if(dna[i] == 'T')
			amountt++;
		else if(dna[i] == 'C')
			amountc++;
		else if(dna[i] == 'G')
			amountg++;
	}
	if(amounta > amountt && amounta > amountc && amounta >  amountg)
		cout<<"A is the most, there are "<<amounta<<" A's"<<endl;
	if(amountt > amounta && amountt > amountc && amountt > amountg)
		cout<<"T is the most, there are "<<amountt<<" T's"<<endl;
	if(amountc > amounta && amountc > amountt && amountc > amountg)
		cout<<"C is the most, there are "<<amountc<<" C's"<<endl;
	if(amountg > amounta && amountg > amountt && amountg > amountc)
		cout<<"G is the most, there are "<<amountg<<" G's"<<endl; 
		
}
