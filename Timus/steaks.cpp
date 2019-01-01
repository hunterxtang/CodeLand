#include <iostream>
using namespace::std;
int main()
{
	int n, k;
	cin>>n>>k;
	int totmin = 2 * n;
	int cookmin = totmin / k;
	int remain = totmin % k;
	if(remain > k) cookmin += 2;
	else if(remain > 0) cookmin += 1;
	if(cookmin < 2) cookmin = 2;
	cout<<cookmin<<endl;
}
