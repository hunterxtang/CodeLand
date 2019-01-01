#include <iostream>
using namespace::std;
int main()
{
	char str[] = "ATCCGTADGHU";
	int len = 11;
	bool palindrome = true;
	for(int i=0; i<len/2; i++) {
		if(str[i] != str[len-1-i]) {
			palindrome = false;
			break;
		}
	}
	if(palindrome == true) {
		cout<<str<<" is a palindrome"<<endl;
	}
	else {
		cout<<str<<" is not a palindrome"<<endl;
	}
}
