/*
ID: hunterx3
LANG: C++
TASK: beads
*/
#include <iostream>
#include <fstream>
using namespace::std;
int main()
{
	ifstream fin("beads.in");
        ofstream fout("beads.out");
	int amount;
	fin>>amount;
	string beads;
	fin>>beads;
	int forward = 0;
	int backward = 0;
	int newtotal = 0;
	string newbeads = beads + beads + beads;
	for(int c=amount; c<2*amount; c++) {
		forward = backward = 0;
		char color = 'w';
		for(int i= c + 1; i< 3 * amount; i++) {
			if(newbeads[i] == 'w') {
				forward++;
				continue;
			} else if(color == 'w')	{
				color = newbeads[i];
			}
			if(color != 'w' && color != newbeads[i])	{
				break;
			} else	{
				forward++;
			}
		}
		color = 'w';
		for(int i=c; i>=0; i--) {
			if(newbeads[i] == 'w') {
				backward++;
				continue;
			} else if(color == 'w')	{
				color = newbeads[i];
			}
			if(color != 'w' && color != newbeads[i])	{
				break;
			} else	{
				backward++;
			}
		}
		if(forward + backward > newtotal) newtotal = forward + backward ; 
	}
	if(newtotal > amount)	newtotal = amount;
	cout<<newtotal<<endl;
}
