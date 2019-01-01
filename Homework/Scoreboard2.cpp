#include <iostream>
#include <fstream>
using namespace::std;
typedef struct Person
{
	string name;
	int score;
} Person;
//int lookup(int total, Person *person, string ipname) {
//	
//}	
int main()
{
	ifstream fin("scoreboard2.in");
        ofstream fout("scoreboard2.out");
	int np;
	fin>>np;
	Person *p=new Person[np];
	for(int i=0; i<np; i++) {
		fin>>p[i].name;
		p[i].score = 0;

	}
	string name;
	int ascore;
	while(fin>>name>>ascore) {
                for(int i=0; i<np; i++) {
                        if(name == p[i].name) {
                                p[i].score += ascore;
                        }
                }
        }
        int largest = 0;
        for(int i=0; i<np; i++) {
                if(p[i].score > p[largest].score) largest = i;
        }
        fout<<p[largest].name<<endl;
}
