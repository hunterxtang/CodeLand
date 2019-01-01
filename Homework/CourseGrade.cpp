#include <iostream>
using namespace::std;
int main()
{
	int score;	
	cout << "Please type a score: " << endl;
	cin >>score;
	if(score < 1 || score > 100){
		cout << "invalid"<<endl;
	} 
	else {
		if(score >= 60){
			cout << "pass"<<endl;
		}
		else {
			cout << "fail"<<endl;
		}
	}
}
