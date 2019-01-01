#include <iostream>
using namespace::std;
int main()
{
	string word;
	cin>>word;
	for(int j=0; j<word.length(); j++) {
		if((word[j] >= 'a') && (word[j] <= 'z')) {
			word[j] = word[j] + 'A' - 'a';
		}
	}
	int occurence = 0;
	while(1) {
		string line;
		cin>>line;
		if(line == "END_OF_TEXT") break;
		for(int i=0; i<line.length(); i++) {
			if((line[i] >= 'a') && (line[i] <= 'z')) {
				line[i] = line[i] + 'A' - 'a';
                	}
		}
		for(int i=0; i<line.length(); i++) {
			bool match = true;
			for(int j=0; j<word.length(); j++) {
				if(line[i+j] != word[j]) {
					match = false;
					break;
				}
			}
			if(match) occurence++;
		}
	}
	cout<<occurence<<endl;
}

