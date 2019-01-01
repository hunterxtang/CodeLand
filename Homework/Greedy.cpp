#include <iostream>
using namespace::std;
int main()
{
	int num;
	cin>>num;
	int numofq = num/25;
	int num2 = num%25;
	int numofd = num2/10;
	int num3 = num2%10;
	int numofn = num3/5;
	int num4 = num3%5;
	int numofp = num4/1;
	cout<<"amount of quarters: "<<numofq<<endl;
	cout<<"amount of dimes: "<<numofd<<endl;
	cout<<"amout of nickels: "<<numofn<<endl;
	cout<<"amount of pennies: "<<numofp<<endl;
	
}
