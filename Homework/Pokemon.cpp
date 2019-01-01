#include <iostream>
using namespace::std;
typedef struct Pokemon
{
	string name;
	int power;
	int price;
} Pokemon;
int compareprice(Pokemon a, Pokemon b)
{
	return a.price < b.price;
}
int comparepower(Pokemon a, Pokemon b)
{
	return a.power < b.power;
}
int main()
{
	int num; 
	cin>>num;
	string type;
	cin>>type;
	Pokemon *pkmon = new Pokemon[num];
	for(int i=0; i<num; i++) {
		cin>>pkmon[i].name>>pkmon[i].power>>pkmon[i].price;
	}
	int largest = 0;
	if(type == "power") {
		sort(pkmon, pkmon + num, comparepower);
	} 
	else {
		sort(pkmon, pkmon + num, compareprice);
	}		
	for(int i=0; i<num; i++) {
		cout<<pkmon[i].name<<" "<<pkmon[i].power<<" "<<pkmon[i].price<<endl;
	}			
}
