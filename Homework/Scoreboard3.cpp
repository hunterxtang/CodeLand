#include <iostream>
#include <fstream>
using namespace::std;

typedef struct Person
{
        string name;
        int score;
} Person;

int compare(Person a, Person b)
{
	return a.name < b.name;
	
}

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
	//qsort(p, np, sizeof(Person), compare);
	sort(p, p + np, compare); 
	for(int i=0; i<np; i++) {
		cout<<p[i].name<<" "<<p[i].score<<endl;
	}

}

