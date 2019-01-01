/*
ID: hunterx3
LANG: C++
TASK: palsquare
*/
#include <iostream>
#include <fstream>
using namespace::std;

bool isPalindromic(string word)
{
	for(int i=0; i<word.length()/2; i++) {
		if(word[i] != word[word.length()-i-1]) {
			return false;
		} 
	}
	return true;
}

string changebase(int num, int base)
{
	/*
	cout<<"number is: "<<num<<endl;
	cout<<"base is: "<<base<<endl;
	*/
	int output[10000];
	int i=0;
	int num2 = num;
	while(num > 0) {
		output[i] = num%base;
		num = num/base;
		i++;
	}
	//cout<<num2<<" in base "<<base<<" is: ";
	string code = "0123456789ABCDEFGHIJK";
	string outputstr = "";
	for(int j=i-1; j>=0; j--) {
		outputstr += code[output[j]];
	}
	return outputstr; 
}

int main()
{
	ifstream fin("palsquare.in");
	ofstream fout("palsquare.out");
	//string word;
	//fin >> word;
	int base;
	fin>>base;
	for(int i=1; i<300; i++) {
		if(isPalindromic(changebase(i*i, base)) == true) {
			fout<<changebase(i, base)<<" "<<changebase(i*i, base)<<endl;
		}
	}
	/*
	if(answer == true) 
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	*/
	//int num = 12000; 
	//string newbase = changebase(num, base);
	//cout<<newbase<<endl;
}
