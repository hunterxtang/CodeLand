/*
ID: hunterx3
LANG: C++ 
TASK: gift1 
*/
#include <iostream>
#include <fstream>
using namespace::std;
int main()
{
	int np;
	ifstream fin("gift1.in");
        ofstream fout("gift1.out");
	fin>>np;
	string *names = new string[np];
	for(int i=0; i<np; i++) fin>>names[i];
	int *money = new int[np];
	for(int i=0; i<np; i++) money[i] = 0;
	int giveridx;
	int amount, howmany, recieveridx;
	string giver;
	while(fin >> giver >> amount >> howmany) {
		for(int i=0; i<np; i++) {
			if(giver == names[i]) {
				giveridx = i;	
				break;      
			}
		}
		if(howmany == 0) continue;
		int share = amount / howmany;
		int leftover = amount % howmany;
		money[giveridx] += -amount + leftover;
		for(int i=0; i<howmany; i++) {
			string whichfriend;
			fin>>whichfriend;
			for(int j=0; j<np; j++) {
				if(whichfriend == names[j]) {
					recieveridx = j;
					break;
				}
			}
			money[recieveridx] += share;
		}
	}
	for(int i=0; i<np; i++) {
		fout<<names[i]<<" "<<money[i]<<endl;
	}	
}
