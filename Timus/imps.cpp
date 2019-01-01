#include <iostream>
using namespace::std;
int main()
{
	int n;
	cin>>n;
	int tot = 0;
	for(int i=1; i<=n; i++) {
		tot+=i;
	}
	if(tot%2 == 0)
		cout<<"black"<<endl;
	else
		cout<<"grimy"<<endl;
}
