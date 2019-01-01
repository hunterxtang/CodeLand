#include <iostream>
#include <string>
using namespace::std;
int main()
{
	int i, j;
	string ring, pattern;
	cin>>ring;
	cin>>pattern;
	ring.append(ring, 0, pattern.length()-1);
	for(i=0; i<ring.length()-pattern.length()+1; i++) {
		for(j=0; j<pattern.length(); j++) {
			if(ring[i+j] != pattern[j]) {
				break;
			}
		}
		if(j==pattern.length()) {
			cout<<"Yes"<<endl;	
			return(0);
		}
		
	}
	if(i==ring.length()-pattern.length()+1)
		cout<<"No"<<endl;
}
