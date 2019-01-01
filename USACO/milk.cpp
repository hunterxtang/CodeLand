/*
ID: hunterx3
LANG: C++
TASK: milk
*/
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace::std;
typedef struct Farmer
{
	int price;
	int amount;
} Farmer;

bool compare(Farmer farmer1, Farmer farmer2)
{
	return (farmer1.price < farmer2.price);
}

int main()
{
	ifstream fin("milk.in");
	ofstream fout("milk.out");
	int n, m;
	fin>>n>>m;
	Farmer *nums = new Farmer[m];
	for(int i=0; i<m; i++) {
		fin>>nums[i].price>>nums[i].amount;
	}	
	sort(nums, nums + m, compare);
	int bought = 0;
	int cost = 0;
	for(int i=0; i<n; i++) {
		if(n - bought < nums[i].amount) {
			cost+=(n-bought)*nums[i].price;
			//cout<<cost<<" "<<bought<<endl;
			break;
		}
		else {
			cost+=nums[i].price * nums[i].amount;
			bought+=nums[i].amount;
		}
		//cout<<cost<<" "<<bought<<endl;
	}
	fout<<cost<<endl;
}
