#include <iostream>
#include <cmath>

using namespace::std;

int findname(string firstname, string *name1, string *name2, string *name3) 
{
	for(int i=0; i<9; i++) {
		if(name1[i] == firstname) {
			return 1;
		}
		else if(name2[i] == firstname) {
			return 2;	
		}	
		else if(name3[i] == firstname) {
			return 3;
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int steps = 0;
	string *people = new string[n];
	for(int i=0;i<n; i++)
		cin>>people[i];
	string name1[9] = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin"};
	string name2[9] = {"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"};
	string name3[9] = {"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};
	int totalsteps = 0;
	int laststep = 1;
	for(int i=0; i<n; i++) {
		steps = findname(people[i], name1, name2, name3);
		totalsteps += abs(steps - laststep);
		laststep = steps;		
	}
	cout<<totalsteps<<endl;
	
}
