#include <iostream>
using namespace::std;
int main()
{
	int amount;
	cin>>amount;
	string *people = new string[amount];
	for(int i=0; i<amount; i++) {
		cin>>people[i];
	}
	int nums = amount;
	for(int i=0; i<amount; i++) {
		int len = people[i].length();
		string name = people[i];	
		if(name[len-1] == 'e' && name[len-2] == 'n' && name[len-3] == 'o' && name[len-4] == '+') {
			nums++;
		}
		
	}
	int n = nums*100+200;
	if(n == 1300) {
		cout<<nums*100+300<<endl;
	}
	else
		cout<<n<<endl;
}
