/*
ID: hunterx3
LANG: C++
TASK: milk2
*/
#include <iostream>
#include <fstream>
using namespace::std;

typedef struct BE 
{
	int beg; 
	int end; 
} BE;

int compareBE(const void *a, const void *b)
{
	return (((BE*)a) -> beg - ((BE*)b) -> beg);
}
int main()
{
	
	int n;
	ifstream fin("milk2.in");
	ofstream fout("milk2.out");
	fin>>n;
	BE *be = new BE[n];
	for(int i=0; i<n; i++) fin>>be[i].beg>>be[i].end;
	fin.close();
	qsort(be, n, sizeof(BE), compareBE);
	/*
	for(int i=0; i<n; i++) {
		cout<<be[i].beg<<" "<<be[i].end<<endl;
	}
	*/
	BE *merge = new BE[n];
	int m = 0;
	merge[m].beg = be[0].beg;
	merge[m].end = be[0].end;
	for(int i=1; i<n; i++) {
		//cout<<"i: "<<i<<" "<<be[i].beg<<" "<<be[i].end<<" m: "<<m<<endl;
		//cout<<"before "<<merge[m].beg<<" "<<merge[m].end<<endl;
		//be[i] overlaps with merge[m]
		if(merge[m].end >= be[i].beg) {
			if(merge[m].end < be[i].end) {
				merge[m].end = be[i].end;
			}
		}
		//otherwise, start a new merge block
		else {
			m+=1;
			merge[m].beg = be[i].beg;
			merge[m].end = be[i].end;
		}	
		//cout<<"after "<<merge[m].beg<<" "<<merge[m].end<<endl;
	}
	int x = m+1;
	//cout<<x<<endl;
	//for(int i=0; i<x; i++) cout<<merge[i].beg<<" "<<merge[i].end<<endl;
	int cont = 0;
	int idle = 0;
	for(int i=0; i<x; i++) {
		if(merge[i].end - merge[i].beg > cont) 
			cont = merge[i].end - merge[i].beg;
	}
	for(int i=0; i<x-1; i++) {
		if(merge[i+1].beg - merge[i].end > idle) 
			idle = merge[i+1].beg - merge[i].end;
	}
	fout<<cont<<" "<<idle<<endl;
	fout.close();
	return 0;
}

