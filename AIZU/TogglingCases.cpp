#include <iostream>
using namespace::std;
int main()
{
	string str;
	getline(cin, str);
	for(int i=0; i<str.length(); i++) {
		if((str[i] >= 'a') && (str[i] <= 'z')) {
			cout<<(char) (str[i] + 'A' - 'a');
		} 
		else if((str[i] >= 'A') && (str[i] <= 'Z')) {
                        cout<<(char) (str[i] + 'a' - 'A');
		}
		else
			cout<<str[i];
	}
	cout<<endl;
}
