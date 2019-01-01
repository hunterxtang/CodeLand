#include <iostream>
#include <fstream>
using namespace::std;
int main() 
{
	ifstream fin("scoreboard.in");
        ofstream fout("scoreboard.out");
	int number;
	fin>>number;
	int *score = new int[number];
	string *person = new string[number];
	for(int i=0; i<number; i++) fin>>person[i];
	string name; 
	int ascore;
	while(fin>>name>>ascore) {
		for(int i=0; i<number; i++) {
			if(name == person[i]) {
				score[i] += ascore;
			}
		}
	}
	int largest = 0;
	for(int i=0; i<number; i++) {
		if(score[i] > score[largest]) largest = i;
	}
	fout<<person[largest]<<endl;
}
