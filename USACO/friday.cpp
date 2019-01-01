/*
ID: hunterx3
LANG: C++
TASK: friday
*/
#include <iostream>
#include <fstream>
using namespace::std;

bool leap(int year) 
{
	if(year%100 == 0) {
		if(year%400 == 0) return true; 
		else return false;
	}
	else {
		if(year%4 == 0) return true;
		else return false;
	}
	
}

int main()
{
	int n;
       	ifstream fin("friday.in");
      	ofstream fout("friday.out");
       	fin>>n;
	int year = 1900;
	int month = 1;
	int day = 1;
	int days[7] = {0, 0, 0, 0, 0, 0, 0};
	int i = 1;
	//cout<<"1909: "<<leap(1909)<<endl;
	//cout<<"1904: "<<leap(1904)<<endl;
	//cout<<"1907: "<<leap(1907)<<endl;
	//cout<<"2000: "<<leap(2000)<<endl;
	//cout<<"2100: "<<leap(2100)<<endl;
	//return 0;
	while(year < 1900+n) {
		//cout<<"day:"<<day<<" month:"<<month<<" year:"<<year<<endl;
		if(month == 2) {
			if((leap(year)) && (day == 29)) {
				month++;
				day = 0; 
			}
			else if((day == 28) && (!leap(year))) {
				month++;
				day = 0;
			}
		}
		else if(((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day == 30)) {
			month++;
			day = 0;
		}
		else if(day == 31) {
			month++;
			day = 0;
		}
		if(month == 13) {
			year++;
			month = 1;
		}
		if(day == 13) {
			days[i%7] += 1;
		}
		day++;
		i ++;
	}
	fout<<days[6]<<" "<<days[0]<<" "<<days[1]<<" "<<days[2]<<" "<<days[3]<<" "<<days[4]<<" "<<days[5]<<endl;
}
