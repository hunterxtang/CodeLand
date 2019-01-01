#include <iostream> 
using namespace::std;
int getMin(int n1, int n2)
{
	if(n1<n2) {
		return n1;
	}
	else {
		return n2;
	}
}
int main()
{
	int num1, num2;
	cout<<"type a number"<<endl;
	cin>>num1;
	cout<<"a nudder one plz"<<endl;
	cin>>num2;
	int answer = getMin(num1, num2);
	cout<< "smaller number = "<<answer<<endl;
	
	int nuber1, nuber2;
	cout<<"type a turd nuber"<<endl;
	cin>>nuber1;
	cout<<"forth nuber, last 1 plz"<<endl;
	cin>>nuber2;
	int secanswer = getMin(nuber1, nuber2);
	cout<< "oter smaler nuber es "<<secanswer<<endl;
	return(0);

}
