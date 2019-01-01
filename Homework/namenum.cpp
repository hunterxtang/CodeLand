/*
ID: hunterx3
LANG: C++
TASK: namenum
*/
#include <iostream>
#include <fstream>
using namespace::std;
string encode(char num)
{
	if(num == '2') return "ABC";
	else if(num == '3') return "DEF";
	else if(num == '4') return "GHI";
	else if(num == '5') return "JKL";
	else if(num == '6') return "MNO";
	else if(num == '7') return "PRS";
	else if(num == '8') return "TUV";
	else if(num == '9') return "WXY";
	else return "";
}

int main() 
{
	ifstream fin("dict.txt");
	ifstream f2in("namenum.in");
	ofstream fout("namenum.out");
	string *words = new string[5000];
	int i=0;
	string names;
	while(fin>>names) {
		//cout<<"i "<<i<<" "<<names<<endl;
		words[i] = names;
		i++;
	}
	fin.close();
	//cout<<words[0]<<endl;
	//cout<<words[1652]<<endl;
	string nums;
	f2in>>nums;
	f2in.close();
	int totwords = i;
	bool *match = new bool[totwords];
	for(int i=0; i<totwords; i++) {
		if(nums.length() == words[i].length()) 
			match[i] = true;
		else 
			match[i] = false;
	}
	//cout<<words[1652]<<endl;
	//cout<<match[1652]<<endl;
	for(int i=0; i<nums.length(); i++) {
		string possible = encode(nums[i]);
		for(int j=0; j<totwords; j++) {
			if(match[j] == false) continue;
			if((words[j][i] == possible[0]) || (words[j][i] == possible[1]) || (words[j][i] == possible[2]))
				match[j] = true;
			else 
				match[j] = false;
		}
	}
	int numtimes = 0;
	for(int i=0; i<totwords; i++) {
		if(match[i] == true) {
			fout<<words[i]<<endl;
			numtimes++;
		}	
		
	}
	if(numtimes == 0) fout<<"NONE"<<endl;
	//cout<<match[1652]<<endl;
}
