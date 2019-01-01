/*
ID: hunterx3
LANG: C++
TASK: transform
*/
#include <iostream>
#include <fstream>
using namespace::std;
char** turn90(int size, char **pattern)
{
	char **newpattern = new char*[size];
	for(int i=0; i<size; i++) {
		newpattern[i] = new char[size];
	}
	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			newpattern[j][size-i-1] = pattern[i][j];
		}
	}
	return newpattern;
}
char **turn180(int size, char **pattern) 
{
	return(turn90(size, turn90(size, pattern)));
}
char **turn270(int size, char **pattern) 
{
	return(turn180(size, turn90(size, pattern)));
}
char **reflection(int size, char **pattern)
{
	char **newpattern = new char*[size];
        for(int i=0; i<size; i++) {
                newpattern[i] = new char[size];
        }
        for(int i=0; i<size; i++) {
                for(int j=0; j<size; j++) {
                        newpattern[i][size-j-1] = pattern[i][j];
                }
        }
        return newpattern;
}
char **combination1(int size, char **pattern) 
{
	return(reflection(size, turn90(size, pattern)));
}
char **combination2(int size, char **pattern)
{
	return(reflection(size, turn180(size, pattern)));
}
char **combination3(int size, char **pattern)
{
	return(reflection(size, turn270(size, pattern)));
}
char **same(int size, char **pattern)
{
	char **newpattern = new char*[size];
        for(int i=0; i<size; i++) {
                newpattern[i] = new char[size];
        }
        for(int i=0; i<size; i++) {
                for(int j=0; j<size; j++) {
                        newpattern[i][j] = pattern[i][j];
                }
        }
        return newpattern;

}
bool match(int size, char **pattern1, char **pattern2)
{
	for(int i=0; i<size; i++) {
		for(int j=0; j<size; j++) {
			if(pattern1[i][j] != pattern2[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main()
{
	
	int size; 
	ifstream fin("transform.in");
        ofstream fout("transform.out");
	fin>>size;
	char **design1 = new char*[size];
	for(int i=0; i<size; i++) {
		design1[i] = new char[size];
		fin>>design1[i];
	}
	char **design2 = new char*[size];
	for(int i=0; i<size; i++) {
		design2[i] = new char[size];
		fin>>design2[i];
	}
	if(match(size, turn90(size, design1), design2)) {
		fout<<"1"<<endl;
	}
	else if(match(size, turn180(size, design1), design2)) {
		fout<<"2"<<endl;
	}
	else if(match(size, turn270(size, design1), design2)) {
		fout<<"3"<<endl;
	}
	else if(match(size, reflection(size, design1), design2)) {
		fout<<"4"<<endl;
	}
	else if(match(size, combination1(size, design1), design2) || match(size, combination2(size, design1), design2) || match(size, combination3(size, design1), design2)) {
		fout<<"5"<<endl;
	}
	else if(match(size, same(size, design1), design2)) {
		fout<<"6"<<endl;
	}
	else 
		fout<<"7"<<endl;

}
